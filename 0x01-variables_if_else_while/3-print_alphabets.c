#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: prints the alphabet in both lower and upper case
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
