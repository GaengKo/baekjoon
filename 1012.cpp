#include <stdio.h>
#include <stdlib.h>
int T;
int** b;
int** a;
int M, N, K;

bool find(int y, int x, int index)
{
	if (a[y][x] == 1 && b[y][x] == 0)
	{
		b[y][x] = index;

		if (x < M - 1) {
			find(y, x + 1, index);
		}
		if (x > 0) {
			find(y, x - 1, index);
		}
		if (y < N - 1) {
			find(y + 1, x, index);
		}
		if (y > 0) {
			find(y - 1, x, index);
		}

		return true;
	}

	return false;
}

int main() {

	bool result = false;
	scanf_s("%d", &T);
	for (int z = 0; z < T; z++)
	{
		scanf_s("%d %d %d", &M, &N, &K);

		a = (int**)malloc(sizeof(int*) * N);
		b = (int**)malloc(sizeof(int*) * N);
		for (int i = 0; i < N; i++)
		{
			b[i] = (int*)malloc(sizeof(int) * M);
			a[i] = (int*)malloc(sizeof(int) * M);
			for (int j = 0; j < M; j++)
			{
				a[i][j] = 0;
				b[i][j] = 0;
			}
		}
		for (int i = 0; i < K; i++)
		{
			int q=0, w=0;
			scanf_s("%d %d", &q, &w);
			a[w][q] = 1;
		}

		int k = 1;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++)
			{
				result = find(i, j, k);
				if (result) k++;
			}
		}
		k--;
		printf("%d\n", k);
		free(a);
		free(b);
	}

	return 0;
}