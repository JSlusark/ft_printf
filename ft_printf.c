/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:33:48 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/13 18:58:07 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static int	ft_convert(va_list args, const char format)
{
			if (format == 'c')
				return (ft_putchar((va_arg(args, int))));
			// if (format == 's')
			// 	return (); // %s Prints a string (as defined by the common C convention).
			// if (format == 'p')
			// 	return (); // %p The void  pointer argument has to be printed in hexadecimal format.
			// if (format == 'd')
			// 	return (); // %d Prints a decimal (base 10) number.
			// if (format == 'i')
			// 	return (); // %i Prints an integer in base 10.
			// if (format == 'u')
			// 	return (); // %u Prints an unsigned decimal (base 10) number.
			// if (format == 'x')
			// 	return (); // %x Prints a number in hexadecimal (base 16) lowercase format.
			// if (format == 'X')
			// 	return (); // %X Prints a number in hexadecimal (base 16) uppercase format.
			// if (format == '%')
			// 	return (); // %% Prints a percent sign.
			return(0);
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
			count = ft_convert(args, *format);
		else
		{
			ft_putchar_fd(*format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
