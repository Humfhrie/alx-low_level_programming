#include <studio.h>
#include "main.h"

/**
 * main - takes a date prints how many days are left in the year, taking 
 * leap years into account
 * Return: 0
 */
int main(void)
{
	int month;
	int day;
	int year;

	month = 4;
	day = 01;
	year = 1997;

	print("Date: %2d/%04d\n', month, day, year);

	return (0);
}
