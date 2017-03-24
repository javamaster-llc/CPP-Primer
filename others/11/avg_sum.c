/*
 * avg_sum.c
 *
 *  Created on: Mar 24, 2017
 *      Author: eugenetan
 */

#include <stdio.h>

#define N 10

void avg_sum(int a[], int n, int *avg, int *sum) {

		*sum = a[0];
		for (int i=0; i<n;i++) {
			*sum += a[i];
		}
		*avg = *sum/n;
}

void swap(int *p, int *q) {
	int temp = *p;
	*p = *q;
	*q = temp;
}

int main() {

	int a1[N] = {9, 16, 47, 82, 4, 66, 12, 3, 25, 51};

	int avg, sum;

	avg_sum(a1, N, &avg, &sum);

	printf("avg: %d, sum: %d\n", avg, sum);

	swap(&avg, &sum);

	printf("after swap avg: %d, sum: %d\n", avg, sum);

}

