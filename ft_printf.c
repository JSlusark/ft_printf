/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjs <jjs@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:33:48 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/12 18:53:36 by jjs              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	// int			chara_len;
/* 	The total number of characters printed, excluding the null-terminating byte.
If an error occurs or an unsupported conversion specifier is encountered, it returns -1. */

	if (!format)
		return (0);
	va_start(args, format);
	va_end(args);

	while(*format)
	{
		if (*format != '%')
		{
			ft_putchar(*format);
		}
		else
		{
			++format;
			if (*format == 'c')
				return (ft_putchar('c'));
			// if (*format == 's')
			// 	return (); // %s Prints a string (as defined by the common C convention).
			// if (*format == 'p')
			// 	return (); // %p The void * pointer argument has to be printed in hexadecimal format.
			// if (*format == 'd')
			// 	return (); // %d Prints a decimal (base 10) number.
			// if (*format == 'i')
			// 	return (); // %i Prints an integer in base 10.
			// if (*format == 'u')
			// 	return (); // %u Prints an unsigned decimal (base 10) number.
			// if (*format == 'x')
			// 	return (); // %x Prints a number in hexadecimal (base 16) lowercase format.
			// if (*format == 'X')
			// 	return (); // %X Prints a number in hexadecimal (base 16) uppercase format.
			// if (*format == '%')
			// 	return (); // %% Prints a percent sign.
		}
		format++;
	}
	va_end(args);
	return(6);
}

// int main()
// {
// 	ft_printf("Hello %s, you scored %d%% on your C exam. Character: %c\n", "Alice", 95, 'A');
// 	return (0);
// }
