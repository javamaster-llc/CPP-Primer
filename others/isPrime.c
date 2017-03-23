#include <stdio.h>


void isPrime (int p) {
	int i=2;
	for (;i<p;i++)
		if(p%i == 0) break;
	if(i<p)
		printf("%d is dividsible by %d\n", p, i);
	else
		printf("%d is prime\n", p);

}

void isPrime1 (int p) {
	int i=2;
	for (;i<p && p%i != 0;i++);
	if(i<p)
		printf("%d is dividsible by %d\n", p, i);
	else
		printf("%d is prime\n", p);

}

int main() {
	isPrime(1);
	isPrime(2);
	isPrime(3);
	isPrime(4);
	isPrime(5);
	isPrime(11);
	isPrime(22338617);
	isPrime1(22338617);
}
