/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:33:48 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/21 17:12:01 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static int	ft_convert(va_list args, const char format)
{
	if (format == 'c')
		return (ft_printchar((va_arg(args, int))));
	if (format == 's')
		return (ft_printstr((va_arg(args, char *)))); // %s Prints a string (as defined by the common C convention).
	if (format == 'i' || format == 'd')
		return (ft_printnum(va_arg(args, int))); // %i Prints an integer in base 10.
	if (format == 'u')
		return (ft_printunsigned(va_arg(args, unsigned int))); // %i Prints an integer in base 10.
	if (format == 'p')
		return (ft_printpointer(va_arg(args, unsigned long long))); // %p The void  pointer argument has to be printed in hexadecimal format.
	if (format == 'x' || format == 'X')
		return (ft_printhex(va_arg(args, int), format)); // %x Prints a number in hexadecimal (base 16) lowercase format.
	if (format == '%')
		return (ft_printchar('%'));
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
			count = count + ft_printchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
