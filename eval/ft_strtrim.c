/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulakr <aboulakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:15:56 by aboulakr          #+#    #+#             */
/*   Updated: 2023/12/28 14:19:52 by aboulakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_chek(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	size_t		i;
	char		*str;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_chek(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_chek(s1[end - 1], set))
		end--;
	str = (char *) malloc((end - start + 1) * sizeof(*s1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
	{
		str[i++] = s1[start++];
	}
	str[i] = 0;
	return (str);
}
