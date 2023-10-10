#include "main.h"

void print_alphabet(void)
{
    char lower;

    for (lower = 'a'; lower <= 'z'; lower++)
	{
        _putchar(lower);
	}

    _putchar('\n');
    return;
}
