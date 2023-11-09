#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything.
 *
 * @format: const char * const
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *string;
	int integer, i;
	float decimal;
	char letter;

	i = 0;
	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				letter = (char)va_arg(args, int);
				printf("%c", letter);
				break;
			case 's':
				string = va_arg(args, char *);
				printf("%s", string);
				break;
			case 'f':
				decimal = (float)va_arg(args, double);
				printf("%f", decimal);
				break;
			case 'i':
				integer = va_arg(args, int);
				printf("%d", integer);
				break;
			default:
				i++;
				continue;
				break;
		}
		i++;
		if (format[i])
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
