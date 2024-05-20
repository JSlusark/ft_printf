/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjs <jjs@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:52:53 by jjs               #+#    #+#             */
/*   Updated: 2024/05/20 23:00:10 by jjs              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int num)
{
	int	length;

	length = 0;
	if (num == 0)
	{
		ft_putchar('0');
		return (1);
	}
	if (num >= 10)
	{
		ft_putnum(num / 10);
	}
	ft_putchar('0' + num % 10);
	while (num != 0)
	{
		length++;
		num = (num / 10);
	}
	return (length);
}