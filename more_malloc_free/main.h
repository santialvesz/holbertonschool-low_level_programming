#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
/** Function that allocates memory using malloc. */
void *malloc_checked(unsigned int b);
/** Function that concatenates two strings. */
char *string_nconcat(char *s1, char *s2, unsigned int n);
/** Function that allocates memory for an array, using malloc. */
void *_calloc(unsigned int nmemb, unsigned int size);
/** Function that creates an array of integers. */
int *array_range(int min, int max);
#endif
