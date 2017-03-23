#include <stdio.h>
#define FPT 32.0
#define S_F (5.0/9.0)

int main() {
	float f, c;
	scanf("%f", &f);
	c = (f - FPT) * S_F;
	printf("%.1f\n", c);
	return 0;
}
