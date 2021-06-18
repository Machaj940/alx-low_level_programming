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
	long long int longlongint;
	float floatType;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int : %zu byte(s)\n", sizeof(longlongint));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

	return (0);

}
