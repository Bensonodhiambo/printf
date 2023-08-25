#include "main.h"
/**
 *
 */

int _char(va_list args)
{
	char val = va_arg(args,char*);

	_putchar(val);
	return (1);
}
