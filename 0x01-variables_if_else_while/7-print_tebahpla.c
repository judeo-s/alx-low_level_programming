#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: prints the alphabet in lowercase and reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
