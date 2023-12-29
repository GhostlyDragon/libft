/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulakr <aboulakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:17:42 by aboulakr          #+#    #+#             */
/*   Updated: 2023/12/02 23:04:04 by aboulakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*str;
	char		*cpy;
	size_t		i;
	size_t		l;

	cpy = (void *)0;
	str = (char *)s1;
	i = 0;
	l = ft_strlen(str);
	cpy = (char *) malloc((l + 1) * sizeof(char));
	if (!cpy)
		return ((void *)0);
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
