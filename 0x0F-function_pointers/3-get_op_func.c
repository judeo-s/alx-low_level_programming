#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - function that selects the correct function to
 *               perform the operation asked by the user.
 *
 * @s: char
 * Return: int function pointer that takes 2 arguments
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (i < 5)
	{
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);

}
