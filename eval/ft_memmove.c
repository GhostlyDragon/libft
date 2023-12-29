/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulakr <aboulakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 21:24:38 by aboulakr          #+#    #+#             */
/*   Updated: 2023/12/25 16:33:14 by aboulakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	size_t					i;
	unsigned char			*dest;
	unsigned char			*srcc;

	dest = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	if (!dest && !srcc)
		return (0);
	i = 0;
	if (dest > srcc)
	{
		while (len-- > 0)
		{
			dest[len] = srcc[len];
		}
	}
	else
	{
		while (i < len)
		{
			dest[i] = srcc[i];
			i++;
		}
	}
	return (dst);
}
