#include <stdio.h>
#include <math.h>
int main() {
	int a,b;
	bool d;
	scanf("%d %d", &a,&b);
	for (int i = a; i <= b; i++)
	{
		d = true;

		if (i % 2 == 0 || i==1) {
			if (i == 2) {
				printf("%d\n", i);
			}
			continue;
		}
		for (int j = 3; j <= sqrt(i); j+=2)
		{
			if (i % j == 0)
			{
				d = false;
				break;
			}
		}
		if (d) {
			printf("%d\n", i);
		}
	}
	return 0;

}