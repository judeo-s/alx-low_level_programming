#include "main.h"

/**
 * print_number - Prints numbers using recursion
 * 
 * @number: int
 * Return: void
 */
void print_number(int n)
{
	int number = n;
	int checker;

	if (number < 0)
	{
		_putchar('-');
		number = number / -1;
	}
	
	checker = number / 10;

	if (checker > 10)
	{
		printf("%d\n", number);
		print_number(checker);
	}
	/*last_digit = number % 10;*/
	/*_putchar('0' + last_digit);*/

}
