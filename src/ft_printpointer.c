/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@stupwddent.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:08:13 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/22 13:52:28 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpointer(void *ptr)
{
	int				count;
	unsigned long	address;

	count = 0;
	if (ptr == 0)
	{
		count += write (1, "(nil)", 5);
		return (count);
	}
	address = (unsigned long)ptr;
	count += ft_printstr("0x");
	count += ft_printhex(address, 'p');
	return (count);
}
