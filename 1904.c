#include <stdio.h>
#include <stdlib.h>
int main() {
	int k;
	scanf("%d", &k);
	int* A = (int*)malloc(sizeof(int) * (k + 1));
	if (k < 3)
		printf("%d", k);
	else {
		A[0] = 0;
		A[1] = 1;
		A[2] = 2;
		for (int i = 3; i <= k; i++)
			A[i] = (A[i - 1] + A[i - 2])%15746;
		printf("%d", A[k]);
	}
	free(A);
	return 0;
}
