#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int k=n,m = 0;
	int count = 0;
	do
	{
		m = k % 10;
		k = m*10+(m+k/10)%10;
		count++;
	} while (k != n);
	printf("%d", count);
}