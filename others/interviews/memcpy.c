#include<stdio.h>
#include<string.h>

void memcpy1(void *dest, void *src, size_t n) {

	char *csrc = (char *) src;
	char *cdest = (char *) dest;

	for (int i=0; i<n;i++)
		cdest[i] = csrc[i];
}

void memcpy2(void *dest, void *src, size_t n) {
	char *csrc = (char *) src;
	char *cdest =  (char *) dest;

	while(n--)
		*cdest++ = *csrc++;
}

int main() {

	char csrc[] = "GeeksforGeeks";
	char cdest1[100];
	char cdest2[100];

	memcpy1(cdest1, csrc, strlen(csrc)+1);
	memcpy2(cdest2, csrc, strlen(csrc)+1);

	printf("Copied string is %s: \n", cdest1);
	printf("Copied string is %s: \n", cdest2);
}
