#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[3] = { 0, };
    int b[3] = { 0, };
    int c[3] = { 0, };
    int k;
    scanf("%d", &k);
    scanf("%d %d %d", &b[0], &b[1], &b[2]);
    for (int i = 1; i < k; i++) {
        scanf("%d %d %d", &a[0], &a[1], &a[2]);
        if (a[0] + b[1] < a[0] + b[2])
            c[0] = a[0] + b[1];
        else
            c[0] = a[0] + b[2];
        if (a[1] + b[0] < a[1] + b[2])
            c[1] = a[1] + b[0];
        else
            c[1] = a[1] + b[2];
        if (a[2] + b[1] < a[2] + b[0])
            c[2] = a[2] + b[1];
        else
            c[2] = a[2] + b[0];
        b[0] = c[0];
        b[1] = c[1];
        b[2] = c[2];
    }
    if (b[0] <= b[1] && b[0] <= b[2])
        printf("%d", b[0]);
    else if(b[1] <= b[2])
        printf("%d", b[1]);
    else
        printf("%d", b[2]);

}
