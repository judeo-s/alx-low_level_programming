#include "main.h"

void print_digits(int);

void times_table(void)
{
    int n = 0;
    while (n <= 9)
    {
        int n_times = 0;
        while(n_times <= 9)
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
