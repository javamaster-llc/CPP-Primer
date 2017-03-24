#include <stdio.h>

int main() {

	int n = 6023, d=0, b=0;
	int bb = 32767;
	
	while(n >0) {
		n /= 10;
		d++; 
	}

	do {
		if (bb %2)
			b++;

	} while (bb /= 2);


	printf("number has %d digit\n", d); 

	printf("number has %d bit\n", b);
}
