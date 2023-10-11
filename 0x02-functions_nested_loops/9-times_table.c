#include "main.h"

void print_digits(int);

/**
* times_table - prints 0,1,2,3,4,5,6,7,8,9 times table
*
* Returns: None
*/
void times_table(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		int n_times = 1;

		while (n_times <= 9)
		{
			print_digits(n * n_times);

			if (n_times != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			n_times++;
		}

		n++;
		_putchar('\n');
	}

}


/**
 * print_digits - prints numbers one character at a time
 *
 * @number: integer input
 * Returns: None
 */
void print_digits(int number)
{
	int first_digit, second_digit;

	if (number <= 9)
	{
		_putchar(' ');
		_putchar('0' + number);
	}
	else
	{
		first_digit = number / 10;
		second_digit = number % 10;

		 _putchar('0' + first_digit);
		_putchar('0' + second_digit);
	}
}
