#include <stdlib.h>
#include "function_pointers"

/**
 * print_name - a function that prints a name.
 * @name: the name to print
 * @f: function of name
 *
 * Rteurn: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
