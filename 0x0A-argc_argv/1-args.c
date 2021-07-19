#include <stdio.h>
#include "holberton.h"
/**
 * main - program that prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
