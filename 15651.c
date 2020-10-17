#include <stdio.h>
#include <stdlib.h>
int* arr;
int n, m;
void dfs(int start, int index) {
	for (int i = start; i < n; i++)
	{
		arr[index] = i + 1;
		if (index != m-1)
			dfs(i, index + 1);
		else
		{
			for (int i = 0; i < m - 1; i++)
			{
				printf("%d ", arr[i]);
			}
			printf("%d\n", arr[m - 1]);
		}
	}
}

int main() {

	scanf_s("%d %d", &n, &m);
	arr = (int*)malloc(sizeof(int) * m+1);
	for (int i = 0; i < m; i++)
	{
		arr[i] = 0;
	}
	dfs(0, 0);
}