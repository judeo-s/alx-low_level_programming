#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: prints all single digit numbers of base 16
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int base10;
	char alpha;

	for (base10 = 0; base10 <= 9; base10++)
	{
		putchar(48 + base10);
	}

	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');
	return (0);
}
