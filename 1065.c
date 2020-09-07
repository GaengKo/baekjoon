#include <stdio.h>
int d(int a)
{
	int b = (a%10)-((a/10)%10);
	a /= 10;
	if (a == 100)
	{
		b = b;
	}
	for (int i = a; i > 0; i/=10)
	{
		if (i < 10)
			break;
		if (i % 10 - (i / 10) % 10 != b)
			return 0;
	}
	return 1;
}

int main() {
	int n;
	scanf("%d", &n);
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (d(i))
			count++;
	}
	printf("%d", count);
	return 0;
}