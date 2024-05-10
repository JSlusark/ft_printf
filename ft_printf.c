/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 12:33:48 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/10 16:53:13 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printft.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	const char	*p;
	// int			count;
	int			x;

	if (!format)
		return (0);
	p = format;
	va_start(args, p);
	va_end(args);

	while(*p)
	{
		if (*p != '%')
		{
			ft_putchar(*p);
		}
		else
		{
			++p;
			if (*p == 'c')
				ft_putchar(*p);
			// if (*p == 's')
			// 	return (); // %s Prints a string (as defined by the common C convention).
			// if (*p == 'p')
			// 	return (); // %p The void * pointer argument has to be printed in hexadecimal format.
			// if (*p == 'd')
			// 	return (); // %d Prints a decimal (base 10) number.
			// if (*p == 'i')
			// 	return (); // %i Prints an integer in base 10.
			// if (*p == 'u')
			// 	return (); // %u Prints an unsigned decimal (base 10) number.
			// if (*p == 'x')
			// 	return (); // %x Prints a number in hexadecimal (base 16) lowercase format.
			// if (*p == 'X')
			// 	return (); // %X Prints a number in hexadecimal (base 16) uppercase format.
			// if (*p == '%')
			// 	return (); // %% Prints a percent sign.
		}
		p++;
	}
	va_end(args);
}

int main()
{
	my_printf("Hello %s, you scored %d%% on your C exam. Character: %c\n", "Alice", 95, 'A');
	return (0);
}
