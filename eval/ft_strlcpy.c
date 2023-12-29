/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulakr <aboulakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:51:12 by aboulakr          #+#    #+#             */
/*   Updated: 2023/12/28 23:23:02 by aboulakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*str;
	size_t		i;

	i = 0;
	str = src;
	if (dstsize > 0)
	{
		while (str[i] != '\0' && i < dstsize -1)
		{
			*(dst++) = str[i++];
		}
		*dst = '\0';
	}
	while (*(src + i))
		++i;
	return (i);
}
