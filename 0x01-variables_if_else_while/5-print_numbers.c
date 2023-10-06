#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int base10;

	for (base10 = 0; base10 <= 9; base10++)
	{
		printf("%d",base10);
	}
	putchar('\n');
	return (0);
}
