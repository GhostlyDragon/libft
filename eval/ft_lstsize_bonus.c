/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboulakr <aboulakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 06:24:43 by aboulakr          #+#    #+#             */
/*   Updated: 2023/12/02 23:20:38 by aboulakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	list_size;

	list_size = 0;
	if (lst == NULL)
		return (0);
	while (lst != NULL)
	{
		list_size++;
		lst = lst->next;
	}
	return (list_size);
}
