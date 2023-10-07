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
	int base10, comb;

	for (base10 = 0; base10 <= 9; base10++)
	{
		for (comb = 0; comb <= 9; comb++)
		{
			if ((base10 != comb) && (base10 < comb))
			{
				putchar(48 + base10);
				putchar(48 + comb);

				if (base10 + comb != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
