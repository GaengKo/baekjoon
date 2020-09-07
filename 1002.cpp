#include <stdio.h>
#include <math.h>
#define pi 3.14159265359
int main() {

	double x1,y1,r1,x2,y2,r2;
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
		double m,n;
		double dis = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
		double range = r1 + r2;
		if (r1 < r2)
		{
			m = r1;
			n = r2;
		}
		else {
			m = r2;
			n = r1;
		}
		if (n - m < dis && dis < n + m)
			printf("2\n");
		else if (dis == m + n)
			printf("1\n");
		else if (dis == n - m && dis != 0)
			printf("1\n");
		else if (dis < n - m)
			printf("0\n");
		else if (dis > n + m)
			printf("0\n");
		else if (dis == 0 && r1 == r2)
			printf("-1\n");
	}
	return 0;

}