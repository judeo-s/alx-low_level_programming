#include "main.h"

/**
 * main - Begins the program
 * _putchar - Prints characters
 *
 * Return: 0 if sucessful
 */
int main(void)
{
	char string[] = "_putchar\n";
	int index;

	for (index = 0; index < (int)sizeof(string) - 1; index++)
	{
		_putchar(string[index]);
	}

	return (0);
}
