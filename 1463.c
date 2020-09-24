#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b=0;
    scanf("%d", &a);
    int* K = (int*)malloc(sizeof(int) * (a+1));
    K[0] = 0;
    K[1] = 0;
    for (int i = 2; i <= a; i++)
    {
        K[i] = K[i - 1] + 1;
        if (i % 2 == 0) {
            if (K[i] > K[i / 2] + 1)
                K[i] = K[i / 2] + 1;
        }
        if (i % 3 == 0)
        {
            if (K[i] > K[i / 3] + 1)
                K[i] = K[i / 3] + 1;
        }
    }
    printf("%d", K[a]);
}