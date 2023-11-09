#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 *
 * @separator: const char *
 * @n: const unsigned int
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *temp;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, char *);

		if (temp != NULL)
			printf("%s", temp);
		else
			printf("(nil)");

		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
			va_end(args);
			printf("\n");
}
