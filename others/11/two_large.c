/*
 * two_large.c
 *
 *  Created on: Mar 24, 2017
 *      Author: eugenetan
 */

#include <stdio.h>

#define N 11

void find_two_largest(int a[], int n, int *largest, int *second_largest) {

	*largest = *second_largest = a[0];

	for (int i=0; i<n; i++) {
		if (a[i]> *largest)
			*largest = a[i];
/*		else if (a[i]> *second_largest && a[i] < *largest)
			*second_largest = a[i];*/
	}

	for (int i=0; i<n; i++) {
		if (a[i]> *second_largest && a[i] < *largest)
			*second_largest = a[i];
	}

}

int *find_largest(int a[], int n) {
	int index = 0;
	for (int i=0; i<n; i++) {
		if (a[i]> a[index])
			index = i;
	}

	return &a[index];
}

int find_largest1(int a[], int n) {
	int largest = 0;
	for (int i=0; i<n; i++) {
		if (a[i]> largest)
			largest = a[i];
	}

	return largest;
}

int main() {

	int a[N] = {9, 16, 47, 82, 4, 66, 12, 3, 25, 51, 100};

	int l1,l2;
	find_two_largest(a, N, &l1, &l2);

	printf("%d, %d\n", l1, l2);

	int *largest = find_largest(a, N);

	printf("%d\n", *largest);

	printf("%d\n", find_largest1(a, N));
}
