#include <stdio.h>
#include <stdlib.h>
/**
 * main - print its name
 * @argc: element
 * @argv: second elemente
 * Return: comment
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	exit(0);


}
