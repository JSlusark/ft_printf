/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:23:31 by jslusark          #+#    #+#             */
/*   Updated: 2024/05/24 14:06:46 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnum(int num)
{
	char	*conv;
	int		len;

	conv = ft_itoa(num);
	len = ft_printstr(conv);
	free(conv);
	return (len);
}
