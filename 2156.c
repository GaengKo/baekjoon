#include <stdio.h>
#include <stdlib.h>
int main() {

	int length;
	scanf("%d", &length);

	int *d = (int*)malloc(sizeof(int) * length);
	int *s = (int*)malloc(sizeof(int) * length);
	int e1, e2, e3;
	for (int i = 0; i < length; i++)
	{
		scanf("%d", &s[i]);

		if (i == 0) d[i] = s[i];
		else if (i == 1) d[i] = s[i] + d[i - 1];
		else {
			e1 = s[i] + d[i - 2];
			e2 = d[i - 1];
			e3 = s[i] + s[i - 1] + d[i - 3];
			if (e1 >= e2 && e1 >= e3)
			{
				d[i] = e1;
			}
			else if (e2 >= e3)
			{
				d[i] = e2;
			}
			else {
				d[i] = e3;
			}
		}
	}
	printf("%d", d[length - 1]);
	return 0;
}