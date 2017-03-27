/*
 * string_lib.c
 *
 *  Created on: Mar 25, 2017
 *      Author: eugenetan
 */

#include <stdio.h>
#include <stddef.h>

char *strcpy(char *s1, const char *s2) {
	size_t len = strlen(s2);

	while (len--)
		*s1++ = *s2++;
	*s1 = '\0';

	return s1;
}

char *strcat(char *s1, const char *s2) {
	while (*s1 != '\0')
		s1++;
	while (*s2 != '\0') {
		*s1++ = *s2++;
	}
	*s1 = '\0';

	return s1;
}

char *strcat1(char *s1, const char *s2) {
	while (*s1)
		s1++;
	while (*s2)
		*s1++ = *s2++;
	*s1 = '\0';

	return s1;
}

int strcmp(const char *s1, const char *s2) {
	int i;
	for (i=0; s1[i]==s2[i]; i++)
		if (s1[i] == '\0')
			return 0;
	return s1[i] - s2[i];
}

int strcmp1(const char *s1, const char *s2) {
	while(*s1 == *s2++)
		if (*s1++ == '\0')
			return 0;
	return *s1 - *s2;
}

int strcmp2(const char *s1, const char *s2) {

	while (*s1 != '\0') {
		if (*s2 == '\0') return 1;
		if (*s2 > *s1) return -1;
		if (*s1 > *s2) return 1;

		s1++;
		s2++;
	}

	if (*s2 != '\0') return -1;

	return 0;
}

size_t strlen(const char *s) {
	size_t n = 0;

	for (n = 0; *s != '\0'; s++)
		n++;
	return n;
}

size_t strlen1(const char *s) {
	size_t n = 0;

	while (*s++)
		n++;
	return n;
}

size_t strlen2(const char *s) {
	char *p = s;

	while (*s)
		s++;
	return s - p;
}

char * memcpy(char *s1, char *s2, size_t n) {
	while (n--)
		*s1++ = *s2++;

	return s1;
}

int main() {
	char s1[] = "abc";
	char s2[] = "abc";
	char s3[] = "tanjing";
	char s4[] = "patricktan";
	char cdest[100];
	char cdest1[100];

	size_t len = strlen(s1);
	printf("s1 %d\n", len);

	size_t len1 = strlen1(s1);
	printf("s1 %d\n", len1);

	size_t len2 = strlen2(s2);
	printf("s2 %d\n", len2);

	size_t len3 = strlen2(s3);
	printf("s3 %d\n", len3);

	size_t len4 = strlen2(s4);
	printf("s4 %d\n", len4);

	strcat1(s1, s2);

	printf("strcat: %s\n", s1);

	memcpy(cdest, s3, strlen(s3));

	printf("memcpy: %s\n", cdest);

	strcpy(cdest, s4);

	printf("strcpy: %s\n", cdest);

	printf("strcmp: %d\n", strcmp(s1, s2));

	printf("strcmp1: %d\n", strcmp1(s1, s3));

	printf("strcmp2: %d\n", strcmp2(s1, s2));

}

