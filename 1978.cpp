#include <stdio.h>
#include <math.h>
int main() {
	int a,b,c=0;
	bool d;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		d = true;
		scanf("%d", &b);
		if (b % 2 == 0 || b==1) {
			if (b == 2)
				c++;
			continue;
		}
		for (int j = 3; j <= sqrt(b); j+=2)
		{
			if (b % j == 0)
			{
				d = false;
				break;
			}
		}
		if (d)c++;
	}
	printf("%d", c);
	return 0;

}