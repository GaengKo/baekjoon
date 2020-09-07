#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,m;
	char** a;
	scanf("%d %d",&n,&m);
	a = (char**)malloc(sizeof(char*)*(n+1));
	for (int i = 0; i < n; i++)
	{
		a[i] = (char*)malloc(sizeof(char) * (m+1));
		for (int j = 0; j < m; j++)
		{
			scanf("%c", &a[i][j]);
			if (a[i][j] != 'B' && a[i][j] != 'W')
				j--;
		}
		a[i][m] = '\0';
	}
	int min = 65;
	for (int y = 0; y <= n - 8; y++)
	{
		for (int x = 0; x <= m - 8; x++)
		{
			int c1 = 0, c2 = 0;
			for (int i = y; i < y+8; i++)
			{
				for (int j = x; j < x+8; j++)
				{
					if ((i + j) % 2 == 0)
					{
						if (a[i][j] != 'W')
							c1++;
						else
							c2++;
					}
					else {
						if (a[i][j] != 'B')
							c1++;
						else
							c2++;
					}
				}
			}
			if (min > c1)
				min = c1;
			if (min > c2)
				min = c2;
		}
	}
	printf("%d", min);
	return 0;
}