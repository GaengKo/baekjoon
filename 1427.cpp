#include <stdio.h>
#include <string.h>

int main() {
	char a[11];
	scanf("%s", a);
	int l = strlen(a);
	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < l; j++)
		{
			if (a[i] > a[j])
			{
				char t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	printf("%s", a);
	return 0;
}