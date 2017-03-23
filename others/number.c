#include <stdio.h>

int main(){
	int i=5, j=3;
	printf("%d %d\n", i/j, i%j);
	printf("%d \n", (i+10)%j);

	printf("%d \n", i>j?i:j);
	return 0;
}
