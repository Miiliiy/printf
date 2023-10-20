#include "main.h"

/**
 * _printf - function that produces output according to a format
 *  @format:  is a character string (c)
 * Return: 1
 */

int _printf_char(va_list format)
{
	char str;

	str = va_arg(format, int);
	_putchar(str);
	return (1);
}

/**
 * _printf - function that produces output according to a format
 *  @format:  is a character string (s)
 * Return: length
 */
int _printf_string(va_list format)
{
	char str;
	int i;
	int length;

	str =  va_arg(format, char*);
	if (str == Null)
{
	str = "(Null);
	length = _strlen(str);
	for ( i = 0; i < length; i++)
	_putchar(str[i]);
	return (length);
}
else
{
	length = _strlen(str);
	for ( i = 0; i < length; i++)
	_putchar(str[i]);
	return (length);
}

/**
* _printf - function that produces output according to a format
*  @format:  is a character string ( % )
* Return: integer
*/
{
int _printf_37(void)
	_putchar(37);
	return (1);
}
