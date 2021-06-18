#include <stdio.h>
/**
 * main - Prints 5 strings
 * Description: Prints sizes of various types in bytes"
 * Return: Always 0 (success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longintType));
	printf("Size of a long long int : %zu bytes\n", sizeof(longlongintType));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));

	return (0);

}
