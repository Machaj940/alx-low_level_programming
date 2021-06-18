#include <stdio.h>
/**
 * main - Prints 5 strings
 * Description: Prints sizes of various types in bytes"
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %zu bytes\n", sizeof(chartype));
	printf("Size of an int: %zu bytes\n", sizeof(intype));
	printf("Size of a long int: %zu bytes\n", sizeof(longinttype));
	printf("Size of a long long int : %zu bytes\n", sizeof(longlonginttype));
	printf("Size of a float: %zu bytes\n", sizeof(floattype));

	return (0);

}
