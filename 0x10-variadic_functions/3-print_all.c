#include <stdarg.h>
#include <stdio.h>

/**
 * str_check - a function that checks if a string exists
 *
 * @str: char *
 * Return: void
 */
void str_check(char *str)
{
	if (str)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}


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
	int integer, i = 0;
	float decimal;
	char letter;

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
				str_check(string);
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
