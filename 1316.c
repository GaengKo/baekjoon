#include <stdio.h>
#include <string.h>
int main() {

	int n, c = 0;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		int j,s[26] = { 0, };
		char alpha[100];
		scanf("%s", alpha);
		char last = alpha[0];
		s[last - 97]++;
		for (j = 1; j < strlen(alpha); j++)
		{
			if (last == alpha[j]) continue;
			else if (s[alpha[j] - 97] > 0) break;
			last = alpha[j]; s[last-97]++;
		}
		if (strlen(alpha) == j)
			c++;
	}
	printf("%d", c);
}