#include "main.h"
/**
 *
 */

int _decimal(va_list args)
{
	int cnt = 0;
	
	int val = va_arg(args,int);
	
	cnt = myputchar(val, 0);
	return (cnt);
}

