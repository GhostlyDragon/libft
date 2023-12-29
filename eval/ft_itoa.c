/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulakr <aboulakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 23:56:52 by aboulakr          #+#    #+#             */
/*   Updated: 2023/12/29 18:24:45 by aboulakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_len(int n)
{
	long long	x;
	long		len;

	x = n;
	len = 0;
	if (x == 0)
		len++;
	if (x < 0)
	{
		len++;
		x = -x;
	}
	if (x > 0)
	{
		while (x >= 1)
		{
			len ++;
			x = x / 10;
		}
	}
	return (len);
}

static char	*convertion(long m, int len)
{
	char	*s;
	long	i;

	i = 0;
	s = malloc(sizeof(char) * (len +1));
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (m < 0)
	{
		s[i++] = '-';
		m *= -1;
	}
	while (len > 0)
	{
		len -= 1;
		if (m >= 10)
		{
			s[len] = m % 10 + 48;
			m = m / 10;
		}
	}
	if (m < 10)
		s[i] = m + 48;
	return (s);
}

char	*ft_itoa(int n)
{
	char		*to_string;
	long long	m;

	m = n;
	to_string = convertion(m, number_len(n));
	return (to_string);
}
