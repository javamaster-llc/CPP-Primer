/*
 * count_word.c
 *
 *  Created on: Mar 25, 2017
 *      Author: eugenetan
 */
#include <stdio.h>

int count_word(const char s[]) {
	int count = 0;

	for (int i; s[i] != '\0'; i++)
		if (s[i] == ' ')
			count++;
	return count;
}

int count_space(const char *s) {
	int count = 0;

	for (; *s != '\0'; s++)
		if (*s == ' ')
			count++;
	return count;
}

int main(int argc, char **argv) {
	while (argc--)
		printf("%s\n", *argv++);
	return 0;
}

