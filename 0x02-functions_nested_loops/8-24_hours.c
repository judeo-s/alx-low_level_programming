#include "main.h"

void print_digits(int);

/**
 * jack_bauer - prints time from 00:00 to 23:59
 *
 * Return: None
 */
void jack_bauer(void)
{
	int hours = 0;

	while (hours <= 23)
	{
		int minutes = 0;

		while (minutes <= 59)
		{
			print_digits(hours);
			_putchar(':');
			print_digits(minutes);
			minutes++;
			_putchar('\n');
		}

		hours++;
	}

}

/**
 * print_digits - Prints texts one character at a time
 *
 * @number: Integer input
 *
 */
void print_digits(int number)
{
	int first_digit, second_digit;

	if (number <= 9)
	{
		_putchar('0' + 0);
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
