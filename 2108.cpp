#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a[8001] = { 0, };
	int b, c,aver=0;
	scanf("%d", &b);
	for (int i = 0; i < b; i++)
	{
		scanf("%d", &c);
		a[c+4000]++;
	}
	int m[2] = { 4001,4001 },max=0;
	float ce = b / 2.0;
	int center = 0, past_center=0,cv=0;
	bool s = true;
	int s1, s2;
	for (int i = 0; i < 8001; i++)
	{
		aver += a[i]*(i-4000); // 산술평균
		past_center = center;
		center += a[i];
		if (past_center < ce && ce < center) {
			cv = i - 4000; //중앙값
		}
		if (a[i]!=0 && a[i] == max) // 최빈값
		{
			if (m[0] > i-4000)
			{
				m[1] = m[0];
				m[0] = i - 4000;
			}
			else if (m[1] > i - 4000)
			{
				m[1] = i - 4000;
			}
		}
		else if (a[i] > max) {
			m[0] = i - 4000;
			m[1] = 4001;
			max = a[i];
		}
		if (a[i] != 0)
		{
			if (s)
			{
				s = false;
				s1 = i - 4000;
			}
			s2 = i-4000;
		}
	}
	if (m[1] != 4001)
		m[0] = m[1];
	printf("%d\n", (int)floor((double)aver/b+0.5));
	printf("%d\n", cv);
	printf("%d\n", m[0]);
	printf("%d", s2 - s1);
	return 0;
}