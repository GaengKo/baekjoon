#include <stdio.h>

int main() {
	unsigned int a, b, c;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d %d", &b, &c);
		unsigned int k = c - b - 1;
		int s = 1;
		int count = 1;
		while (k > 0)
		{
			int d = (s+1)*(s+2)/2;
			if (k >= d)
				k -= ++s;
			else if (d - s - 1 > k)
				k -= --s;
			else
				k -= s;
			count++;
		}
		printf("%d\n", count);
	}

	return 0;

}