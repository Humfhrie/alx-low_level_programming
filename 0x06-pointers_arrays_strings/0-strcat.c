#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings.
 * @dest: first paaramter, that concatenates two strings.
 * @src: second parameter
<<<<<<< HEAD
 * Return: A string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len])
		len++
	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
=======
 * Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
	strcat(dest, src);
>>>>>>> 23dcde87632b32b085de986114750a0289a5d851
	return (dest);
}
