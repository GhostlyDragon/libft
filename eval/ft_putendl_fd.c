/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulakr <aboulakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 02:38:05 by aboulakr          #+#    #+#             */
/*   Updated: 2023/12/22 09:19:41 by aboulakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	if (fd < 0)
		return ;
	if (!str)
		return ;
	while (*str)
	{
		write(fd, str, 1);
		str++;
	}
	write (fd, "\n", 1);
}
