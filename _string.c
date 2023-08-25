#include "main.h"

/**
 *
 */

int _string(va_list args)
{
	int cnt = 0;
	char *val = va_arg(args,char *);

	while (*val !='\0')
	{
		putchar(*val);
		val++;
		cnt++;
	}
	return (cnt);
}
