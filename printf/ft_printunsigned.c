/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:52:53 by jjs               #+#    #+#             */
/*   Updated: 2024/05/22 12:57:11 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned int num)
{
	int	length;

	length = 0;
	if (num >= 10)
		length += ft_printunsigned(num / 10);
	ft_printchar('0' + num % 10);
	return (length + 1);
}
