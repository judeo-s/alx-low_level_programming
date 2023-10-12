#include "main.h"

void print_digits(int);

/**
 * more_numbers - Prints number from 0-14 10 times
 * print_digits - Prints numbers with 2 digits.
 * Returns: None
 */
void more_numbers(void)
{
	int counter = 0;

	while (counter < 10)
	{
		for (int i = 0; i <= 14; i++)
		{
			print_digits(i);
		}
		_putchar('\n');
		counter++;
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

	second_digit = number % 10;

	if (number > 9)
	{
		first_digit = number / 10;
		_putchar('0' + first_digit);
	}

	_putchar('0' + second_digit);
}

