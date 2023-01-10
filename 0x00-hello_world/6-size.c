#include<stdio.h>
int main() {
	int intType;
	float floatType;
	double doubleType;
	char charType;

	//sizeof evaluates the the size of a variable
	printf("Size of int: %zu bytes\n", sizeof(intType));
	print("Size of float: %zu bytes\n", sizeof(floatType));
	print("Size of double: %zu bytes \n", sizeof(doubleType));
	print("Size of char: %zu bytes\n", sizeof(charType));

	return 0;
}
