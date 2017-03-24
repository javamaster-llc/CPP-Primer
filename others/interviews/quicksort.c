/*
 * quicksort.c
 *
 *  Created on: Mar 23, 2017
 *      Author: eugenetan
 */

#include <stdio.h>

#define N 10

int split(int a[], int low, int high) {

	int part_element = a[low];

	for (;;) {
		while (low < high && part_element <= a[high])
			high--;
		if (low >= high) break;
		a[low++] = a[high];

		while (low < high && a[low] <= part_element)
			low++;
		if (low >= high) break;
		a[high--] = a[low];
	}

	a[high] = part_element;
	return high;
}

void quicksort(int a[], int low, int high) {
	int middle;

	if (low >= high) return;
	middle = split(a, low, high);
	quicksort(a, low, middle -1);
	quicksort(a, middle+1, high);
}

void printAll(int a[]) {

	printf("In sorted order : ");

	for (int i=0; i< N; i++)
		printf("%d ", a[i]);
	printf("\n");
}

int main() {

	int a1[N] = {9, 16, 47, 82, 4, 66, 12, 3, 25, 51};
	int a2[N] = {9, 1, 4, 8, 5, 6, 2, 3, 9, 1};

	quicksort(a1, 0, N-1);
	printAll(a1);

	quicksort(a2, 0, N-1);
	printAll(a2);

	return 0;
}
