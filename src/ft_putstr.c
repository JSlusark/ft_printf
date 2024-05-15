/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:27:58 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/15 16:47:31 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	len;

	if(!str)
		str = "(null)";
	len = ft_strlen(str);
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}

	return (len);
}
