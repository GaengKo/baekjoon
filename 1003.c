#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	int A[41][2] = {0,};
	A[0][0] = 1;
	A[1][1] = 1;
	for (int i = 2; i <= 40; i++)
	{
		A[i][0] = A[i - 1][0] + A[i - 2][0];
		A[i][1] = A[i - 1][1] + A[i - 2][1];
	}
	for (int i = 0; i < n; i++)
	{
		int k;
		scanf("%d", &k);
		printf("%d %d\n", A[k][0], A[k][1]);
	}
	return 0;
}