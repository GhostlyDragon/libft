/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulakr <aboulakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:25:23 by aboulakr          #+#    #+#             */
/*   Updated: 2023/12/22 09:11:21 by aboulakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long			i;
	unsigned char			*temp;

	temp = b;
	i = 0;
	while (i < len)
	{
		temp[i] = (unsigned char ) c;
		i++;
	}
	return (b);
}
