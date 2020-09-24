#include <stdio.h>
#include <stdlib.h>
char **a;
void star(int x,int y)
{
	a[y][x] = '*';
	a[y + 1][x - 1] = '*';
	a[y + 1][x + 1] = '*';
	for (int i = 0; i < 5; i++)
		a[y + 2][x + i-2] = '*';
}

int main() {
	int n;
	scanf("%d", &n);
	a = (char**)malloc(sizeof(char*)*n);
	for (int i = 0; i < n; i++)
	{
		a[i] = (char*)malloc(sizeof(char)*(n*2-1));
		for (int j = 0; j < n * 2 - 1; j++)
			a[i][j] = ' ';
		a[i][n * 2 - 1] = '\0';
	}
	int draw_point = n - 1;
	for (int i = 0; i < n / 3; i++)
	{
		draw_point = n - (i * 3)-1;
		int j;
		for (j = 0; j <= i; j++)
		{
			if (i * 3 - 1 >= 0)
			{
				int count = 0;
				if (a[i * 3 - 1][draw_point - 1] == '*') count++;
				if (a[i * 3 - 1][draw_point + 1] == '*') count++;
				if(count == 1)
					star(draw_point, i * 3);
			}
			else
				star(draw_point, i * 3);
			draw_point += 6;
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%s\n", a[i]);
	}
	return 0;
}