#include <stdio.h>
#include <stdlib.h>
char** a;
void makestar(int x,int y,int b) {
	if (b == 1)
		a[x][y] = '*';
	else
	{
		b = b / 3;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i != 1 || j != 1)
					makestar(x + (b * i), y + (b * j), b);
			}
		}
	}
}
int main() {
	int n;
	scanf("%d", &n);
	a = (char**)malloc(sizeof(char*) * n);
	for (int i = 0; i < n; i++)
	{
		a[i] = (char*)malloc(sizeof(char) * (n));
		for (int j = 0; j < n; j++)
			a[i][j] = ' ';
		a[i][n] = '\0';
	}
	makestar(0, 0, n);
	for (int i = 0; i < n; i++)
	{
		printf("%s\n", a[i]);
	}
}