#include "main.h"

/**
 *
 */

int _printf(const char *format,...)
{
	int counter = 0;
	va_list args;
	char spec;
	int i =0;
	va_start(args,format);

	if (format[i] =='\0')
	return (-1);

	while (format[i])
	{

	 if (format[i] =='%')
	 {
	 spec = format[i + 1];

	 counter = counter + (*switcher(spec))(args);

	 i++;
	 }
	 else
	 {

	 _putchar(format[i]);
	 counter = counter + 1;

	 }
	 i++;
	 }
	return(counter);
}
