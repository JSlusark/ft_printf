/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jslusark <jslusark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:59:20 by jslusark          #+#    #+#             */
/*   Updated: 2024/06/14 14:56:31 by jslusark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicate;

	duplicate = (char *)malloc(ft_strlen(s) + 1);
	if (!duplicate)
		return (0);
	ft_memcpy(duplicate, s, ft_strlen(s) + 1);
	return (duplicate);
}
