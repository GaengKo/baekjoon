#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, m;
	scanf_s("%d %d", &n, &m);
	int* arr;
	int k = 0;
	bool end = true;
	arr = (int*)malloc(sizeof(int) * m);
	for (int i = 0; i < m; i++) {
		arr[i] = 1;
	}
	while (1) {
		for (int i = 0; i < m; i++) {
			printf("%d", arr[i]);
			if (i == m - 1)
				printf("\n");
			else
				printf(" ");
		}
		k = 0;
		end = true;
		for (int i = 0; i < m; i++) {
			if (arr[m - i - 1] != n)
			{
				k = m - i;
				arr[k- 1]++;
				end = false;
				break;
			}
		}
		if (end)
			break;
		for (int i = k; i < m; i++)
			arr[i] = 1;
	}
	return 0;
}