#include "main.h"

int main()
{
    char string[] = "_putchar\n";
    int index;

    for (index = 0; index < sizeof(string); index++)
    {
        _putchar(string[index]); 
    }

    return (0);
}
