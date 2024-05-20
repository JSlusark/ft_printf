/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:23:31 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/20 17:01:48 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnum(int num)
{
	char	*conv;
	int		len;

	conv = ft_itoa(num);
    len = ft_putstr(conv);
	free(conv);  // Free the memory allocated by ft_itoa
	return (len);
}
