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

void avg_sum1(int a[], int n, int *avg, int *sum) {
		int *p;
		*sum = a[0];
		for (p = a; p < a+N; p++) {
			*sum += *p;
		}
		*avg = *sum/n;
}

void avg_sum2(int a[], int n, int *avg, int *sum) {
		*sum = a[0];
		int *p = a;
		while (p < a+N) {
			*sum += *p++;
		}
		*avg = *sum/n;
}

void avg_sum3(int a[], int n, int *avg, int *sum) {
		int *p = a;
		*sum = a[0];
		for (int i=0; i<n;i++) {
			*sum += p[i];
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

	printf("avg_sum avg: %d, sum: %d\n", avg, sum);

	avg_sum1(a1, N, &avg, &sum);

	printf("avg_sum1 avg: %d, sum: %d\n", avg, sum);

	avg_sum2(a1, N, &avg, &sum);

	printf("avg_sum2 avg: %d, sum: %d\n", avg, sum);

	avg_sum3(a1, N, &avg, &sum);

	printf("avg_sum3 avg: %d, sum: %d\n", avg, sum);

	swap(&avg, &sum);

	printf("after swap avg: %d, sum: %d\n", avg, sum);

}

