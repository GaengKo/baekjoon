#include <stdio.h>

int main() {
	int a;
	scanf("%d",&a);

	for (int i = 0; i < a; i++)
	{
		int n = i;
		for (int j = i; j > 0; j /= 10)
		{
			n += j % 10;
		}
		if (n == a)
		{
			printf("%d", i);
			return 0;
		}
	}
	printf("0");
	return 0;

}