#include <stdio.h>

int main() {
	int m,d,y=0;
	int mon[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	scanf("%d", &m);
	scanf("%d", &d);
	for (int i = 0; i < m-1; i++)
		y += mon[i];
	m = (y + d) % 7;
	if (m == 1)
		printf("MON");
	else if (m == 2)
		printf("TUE");
	else if (m == 3)
		printf("WED");
	else if (m == 4)
		printf("THU");
	else if (m == 5)
		printf("FRI");
	else if (m == 6)
		printf("SAT");
	else
		printf("SUN");
	return 0;
}