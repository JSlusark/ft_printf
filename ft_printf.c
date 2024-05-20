/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjs <jjs@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:33:48 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/20 22:01:47 by jjs              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static int	ft_convert(va_list args, const char format)
{
	if (format == 'c')
		return (ft_putchar((va_arg(args, int))));
	if (format == 's')
		return (ft_putstr((va_arg(args, char *)))); // %s Prints a string (as defined by the common C convention).
			// if (format == 'p')
			// 	return (); // %p The void  pointer argument has to be printed in hexadecimal format.
	if (format == 'i' || format == 'd')
		return (ft_putnum(va_arg(args, int))); // %i Prints an integer in base 10.
	if (format == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int))); // %i Prints an integer in base 10.
			// if (format == 'u')
			// 	return (); // %u Prints an unsigned decimal (base 10) number.
			// if (format == 'x')
			// 	return (); // %x Prints a number in hexadecimal (base 16) lowercase format.
			// if (format == 'X')
			// 	return (); // %X Prints a number in hexadecimal (base 16) uppercase format.
	if (format == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			count;

	va_start(args, format);
	count = 0;
	if (!format)
		return (0);

	while (*format != '\0')
	{
		if (*format == '%' && ft_strchr("cspdiuxX%", *format++))
			count = count + ft_convert(args, *format);
		else
		{
			count = count + ft_putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
