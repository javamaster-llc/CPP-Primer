/*
 * coding-interview.c
 *
 *  Created on: Mar 27, 2017
 *      Author: eugenetan
 */

#include<stdio.h>

main() {

	printf("%d\n", strcmp("strcmp()", "strcmp()"));

	int a[] = { 2, 1 };

	printf("%d\n", *a);

	int i;
	char s[] = "hello";

	for (i = 0; s[i]; ++i)
		;
	printf("for-loop %d \n", i);

	i = 0;
	while (s[i] != '\0') { // s[i++] -> s[i]
		i++;
	}
	printf("while-loop %d \n", i);

	char ss[] = "C++";

	printf("%s \n", ss);
//	ss++; // error: cannot increment value of type 'char [4]
	printf("%s \n", ss);

	long int decimalNumber, remainder, quotient;
	int binaryNumber[100], ii = 1;

	printf("Enter any decimal number: ");
	scanf("%ld", &decimalNumber);
	quotient = decimalNumber;
	while (quotient != 0) {
		binaryNumber[ii++] = quotient % 2;
		quotient = quotient / 2;
	}
	printf("Equivalent binary value of decimal number %d: ", decimalNumber);
	for (int j = ii - 1; j > 0; j--)
		printf("%d ", binaryNumber[j]);

	printf("\n");



	return 0;

	unsigned x = 5, y = &x, *p = y + 0;

	printf("%u\n", *p);

}
