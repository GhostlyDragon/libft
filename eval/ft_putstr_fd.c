/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulakr <aboulakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 02:15:53 by aboulakr          #+#    #+#             */
/*   Updated: 2023/12/22 09:19:23 by aboulakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned char	*str;
	int				i;

	if (fd < 0)
		return ;
	str = (unsigned char *)s;
	i = 0;
	if (!str)
		return ;
	while (*str)
	{
		write (fd, str, 1);
		str++;
	}
}
