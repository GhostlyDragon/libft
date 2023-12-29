/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulakr <aboulakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:19:57 by aboulakr          #+#    #+#             */
/*   Updated: 2023/12/11 18:32:36 by aboulakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	word;

	word = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != '\0')
			word++;
		while (*s && *s != c)
			s++;
	}
	return (word);
}

static char	**free_split(char **split, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		free(split[i++]);
	free(split);
	return (NULL);
}

static char	**alloc_split(const char *s, char c)
{
	size_t		i;
	size_t		total;
	char		**split;
	size_t		size;

	i = 0;
	if (!s)
		return (NULL);
	size = count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (size + 1));
	if (!split)
		return (NULL);
	while (*s && i < size)
	{
		total = 0;
		while (*s == c)
			s++;
		while (*s && *s != c && s++)
			total++;
		split[i] = (char *)malloc(sizeof(char) * (total + 1));
		if (!split[i])
			return (free_split(split, i));
		i++;
	}
	return (split);
}

char	**ft_split(const char *s, char c)
{
	char		**split;
	size_t		i;
	size_t		j;
	size_t		size;

	i = 0;
	size = count_words(s, c);
	split = alloc_split(s, c);
	if (!split)
		return (NULL);
	while (i < size && *s)
	{
		j = 0;
		while (*s == c)
			s++;
		while (*s && *s != c)
			split[i][j++] = *s++;
		split[i][j] = '\0';
		i++;
	}
	split[i] = NULL;
	return (split);
}
