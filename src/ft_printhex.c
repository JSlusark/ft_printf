/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:30:49 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/21 16:35:30 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlen(unsigned int num)
{
	int	length;

	length = 0;
	while (num != 0)
	{
		num = num / 16;
		length++;
	}
	return (length);
}

void	ft_hexconvert(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_hexconvert(num / 16, format);
		ft_hexconvert(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_printchar((num + '0'));
		else
		{
			if (format == 'x')
				ft_printchar((num - 10 + 'a'));
			if (format == 'X')
				ft_printchar((num - 10 + 'A'));
		}
	}
}

int	ft_printhex(unsigned int num, char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_hexconvert(num, format);
	return (ft_hexlen(num));
}
