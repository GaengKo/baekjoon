#include <stdio.h>
int main() {
		int i, n;
		scanf("%d", &n);
		for (i = 1; n - i > 0; i++)n -= i;
		if(i%2==1)printf("%d/%d", i + 1 - n, n);
		else printf("%d/%d",n,i + 1 - n);
}