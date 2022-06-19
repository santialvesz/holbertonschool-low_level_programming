#ifndef MAIN_H
#define MAIN_H

/** function takes a pointer to an int **/
void reset_to_98(int *n);
/** function that swap values of two integrers **/
void swap_int(int *a, int *b);
/** function that returns the length of a string **/
int _strlen(char *s);
/** funtion that puts sth **/
void _puts(char *str);
/** function that prints string in reverse **/
void print_rev(char *s);
/** _putchar - writes the character c to stdout **/
int _putchar(char);
/** function that reverses a string **/
void rev_string(char *s);
/** function that prints every other character of a string, starting with the first characte r**/
void puts2(char *str);
/**  function that prints half of a string **/
void puts_half(char *str);
/** function that prints n elements of an array of integrers **/
void print_array(int *a, int n);
/** function that copies the string **/
char *_strcpy(char *dest, char *src);
/** function that concatenates two strings **/ 
char *_strcat(char *dest, char *src);
/** function that concatenates two strings **/
char *_strncat(char *dest, char *src, int n);
/** function that copies a string. **/
char *_strncpy(char *dest, char *src, int n);
/** function that reverses the content of an array of integers **/
void reverse_array(int *a, int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
#endif
