#include <string.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	int i;
	int l;

	i = 0;
	l = (int)strlen(str);

	while (i < l)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
