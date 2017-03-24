#include <stdio.h>

int main() {
	int h, w, l, v, ww;

	scanf(" %d", &h);
	scanf(" %d", &l);
	scanf(" %d", &w);
	v = h*w*l;
	ww = (v+165)/166;

	printf("v : %d\n", v);
	printf("pounds : %d\n", ww);

	return 0;
}
