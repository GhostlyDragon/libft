/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulakr <aboulakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:03:47 by aboulakr          #+#    #+#             */
/*   Updated: 2023/12/22 09:21:26 by aboulakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	if (count != 0 && (count * size) / count != size)
		return (NULL);
	str = malloc (count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}
