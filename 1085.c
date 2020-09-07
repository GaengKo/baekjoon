#include <stdio.h>
int main() {

	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	w = w - x;
	h = h - y;
	if (x <= y && x <= w && x <= h)
		printf("%d", x);
	else if (y <= w && y <= h)
		printf("%d", y);
	else if (w <= h)
		printf("%d", w);
	else
		printf("%d",h);

	return 0;

}