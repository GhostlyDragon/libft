/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulakr <aboulakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:38:13 by aboulakr          #+#    #+#             */
/*   Updated: 2023/12/27 17:31:39 by aboulakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	i = 0;
	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	dest_length = ft_strlen(dst);
	j = dest_length;
	if (dstsize > src_length + dest_length)
		dstsize = src_length + dest_length + 1;
	if (dest_length < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && dest_length + i < dstsize - 1)
			dst[j++] = src[i++];
		dst[j] = '\0';
	}
	if (dest_length >= dstsize)
		dest_length = dstsize;
	return (dest_length + src_length);
}
