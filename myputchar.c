#include "main.h"
/**
 *
 */

int myputchar(int x, int count)
{
	int cl = x;
	
	if (x < 0)
	{
		cl = -x;
		_putchar('-');
		count = count +1;
	}
	if (cl/10)
	{
		count = myputchar(cl/10 , count);

	}
	_putchar(cl%10 + '0');
	return (count +1);
}
