/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleonard <sleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 11:28:00 by sleonard          #+#    #+#             */
/*   Updated: 2019/10/24 13:25:14 by sleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddback(t_list **list, void *content, size_t content_size)
{
	t_list *tmp;

	if (!list)
		return ;
	if (!*list)
	{
		*list = ft_lstnew(content, content_size);
		(*list)->last = *list;
	}
	else
	{
		tmp = (*list)->last;
		tmp->next = ft_lstnew(content, content_size);
		(*list)->last = tmp->next;
	}
}
