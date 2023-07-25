#include "main.h"

/**
 * get_width - Calculates the width for printing
<<<<<<< HEAD
 * @format: Formatted string in which to print the arguments.
=======
 * @format: Formats string in which to print the arguments.
>>>>>>> 9d198360566b6cdd8136b4047dd0886ffa705c07
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: width.
 */
int get_width(const char *format, int *i, va_list list)
{
	int curr_i;
	int width = 0;

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(format[curr_i]))
		{
			width *= 10;
			width += format[curr_i] - '0';
		}
		else if (format[curr_i] == '*')
		{
			curr_i++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = curr_i - 1;

	return (width);
}
<<<<<<< HEAD

=======
>>>>>>> 9d198360566b6cdd8136b4047dd0886ffa705c07
