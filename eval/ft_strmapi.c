/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulakr <aboulakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 05:59:12 by aboulakr          #+#    #+#             */
/*   Updated: 2023/12/14 13:29:40 by aboulakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*string;
	unsigned int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	string = malloc(sizeof (char) * (ft_strlen(s) + 1));
	if (!string)
		return (NULL);
	while (i < ft_strlen(s))
	{
		string[i] = f(i, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}
