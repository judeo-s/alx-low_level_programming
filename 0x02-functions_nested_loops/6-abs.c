#include "main.h"

int _abs(int n)
{
    if (n > 0)
    {
        return (n);
    }
    if (n == 0)
    {
        return (0);
    }
    if (n < 0)
    {
        return (n / -1);
    }

    return (0);
}
