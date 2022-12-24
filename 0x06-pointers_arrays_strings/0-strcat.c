#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings.
 * @dest: first parameter
 * @src: second parameter
 * Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	strcat(dest, src);
	return (dest);
}
