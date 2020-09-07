#include <stdio.h>
int main() {
	char n;
	int s[26] = { 0, };
	int max=0,k;
	while (1)
	{
		n = getchar();
		if (n == '\n')
			break;
		else if (n > 96)
			k = n - 97;
		else
			k = n - 65;
		if (++s[k] > max) max = s[k];
	}
	k = 0;
	for (int i = 0; i < 26; i++)
	{
		if (max == s[i]) {
			k++; n = i + 65;
		}
	}
	if (k > 1)
		printf("?");
	else printf("%c", n);
}