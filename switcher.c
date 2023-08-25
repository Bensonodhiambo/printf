#include "main.h"
/*
 * *switcher - switches operation according to command
 * @ch: command
 *
 * return- & of function
 */

 int (*switcher(char ch))(va_list)
{
	if (ch =='s')
	{
		return (&_string);
	}
	else if (ch == 'c')
	{
		return(&_char);
	}
	else if  (ch == 'd')
	{
		return(&_decimal);
	}
	return(0);
}
