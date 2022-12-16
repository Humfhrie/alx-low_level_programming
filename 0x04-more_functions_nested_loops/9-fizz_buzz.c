#include <stdio.h>
#include "main.h"
/**
 * main - Entry point - filter out the 99.5% of programming job candidates
 *
 * Description: prints the numbers 1 - 100 w/
 * fizz or multiples of 3, Buzz for multiples of 5,
 * and fizzbuzz for multiples of both
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("fizzBuzz");
		else if (i % 3 == 0)
			printf("fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
