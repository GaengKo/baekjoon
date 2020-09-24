#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int k = 1;
int n;
int** b;
int** a;


bool find(int x, int y, int index)
{
	if (a[x][y] == 1 && b[x][y]==0)
	{
			b[x][y] = index;

		if (x < n - 1) {
			find( x + 1, y, index);
		}
		if (x > 0) {
			find( x - 1, y, index);
		}
		if (y < n - 1) {
			find( x, y+1, index);
		}
		if (y > 0) {
			find( x, y-1, index);
		}

		return true;
	}

	return false;
}

int main() {

	bool result = false;
	scanf("%d", &n);
	a = (int**)malloc(sizeof(int*) * n);
	b = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++)
	{
		b[i] = (int*)malloc(sizeof(int) * n);
		a[i] = (int*)malloc(sizeof(int) * n);
		for (int j = 0; j < n; j++)
		{
			scanf("%d",&a[i][j]);
			b[i][j] = 0;
		}
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
		{
			result = find( i, j, k);
			if (result) k++;
		}
	}
	int min = 10000;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
		{
			if (b[i][j] != 0)
			{
				for (int x = 0; x < n; x++) {
					for (int y= 0; y < n; y++)
					{
						if (b[x][y] != 0 && b[x][y] != b[i][j])
						{
							if (min > abs(i - x) + abs(j - y))
								min = abs(i - x) + abs(j - y);
						}
					}
				}
			}
		}
	}

	printf("%d", min-1);

    return 0;
}