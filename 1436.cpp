#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b=0;
	scanf("%d", &a);
	for (int i = 666; i < 3000000; i++)
	{
		int k = 0;
		for (int j = i; j > 0; j/=10)
		{
			if (j % 10 == 6)
			{
				k++;
				if (k == 3)
				{
					b++;
					break;
				}
			}
			else
				k = 0;
		}
		if (b == a)
		{
			printf("%d", i);
			break;
		}
	}
	return 0;

}