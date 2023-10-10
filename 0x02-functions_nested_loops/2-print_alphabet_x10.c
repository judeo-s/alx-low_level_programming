#include "main.h"

void print_alphabet_x10(void)
{
    int counter = 0;

    while(counter < 10)
    {
        char lower = 'a';

        while (lower <= 'z')
	    {
            _putchar(lower);
            lower++;
	    }

        _putchar('\n');
        counter++;
    }

    return;
}
