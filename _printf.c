#include "main.h"
/**
 * _printf - function that prints formated text in standard output.
 * @format: is a character string
 *
 * Return: number of characters printed. -1 on error.
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;

	const char *ptr = format;

	while (*ptr != '\0')
	{
		if (*ptr == '%')
		{
			ptr++;

		if (*ptr == 'c')
		{
		int c = va_arg(args, int);

		putchar(c);

		count++;
		}
		else if (*ptr == 's')
		{
			char *s = va_arg(args, char *);

			while (*s != '\0')
			{
				putchar(*s);

				s++;

				count++;
			}
		}
		else if (*ptr == '%')
		{
			putchar('%');
			count++;
		}
		}
		else
		{
			putchar(*ptr);
			count++;
		}

		ptr++;
	}

	va_end(args);
	return (count);
}
