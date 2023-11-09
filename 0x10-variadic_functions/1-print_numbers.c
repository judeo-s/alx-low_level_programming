#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 *
 * @separator: const char *
 * @n: const unsigned int
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n > 0)
	{
		if (separator != NULL)
		{
			va_start(args, n);
			for (i = 0; i < n; i++)
			{
				printf("%d", va_arg(args, int));
				if (i != (n - 1))
				{
					printf("%s", separator);
				}
			}
			va_end(args);
		}
		else
		{
			va_start(args, n);
			for (i = 0; i < n; i++)
			{
				printf("%d", va_arg(args, int));
			}
			va_end(args);
		}
		printf("\n");
	}
}
