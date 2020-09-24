#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < n; j++)
		{
			if (j < n - i)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	return 0;
}