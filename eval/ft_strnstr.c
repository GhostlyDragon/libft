/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulakr <aboulakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:28:11 by aboulakr          #+#    #+#             */
/*   Updated: 2023/12/28 23:17:35 by aboulakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	char		*hay;

	i = 0;
	hay = (char *)haystack;
	if (!hay && len == 0)
		return (0);
	if (*needle == '\0')
		return (hay);
	while (hay[i] != '\0' && i < len)
	{
		j = 0;
		while (hay[i + j] != '\0' && needle[j] != '\0'
			&& (hay[i + j] == needle[j]) && i + j < len)
			j++;
		if (needle[j] == '\0')
			return (hay + i);
		i++;
	}
	return (0);
}
