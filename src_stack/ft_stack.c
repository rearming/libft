/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 16:14:09 by sleonard          #+#    #+#             */
/*   Updated: 2020/02/13 16:14:15 by sleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool				ft_stack_init(t_stack *stack, int size)
{
	if (size <= 0 || !stack)
		return (false);
	stack->elems = malloc(sizeof(t_stack_elem) * size);
	if (!stack->elems)
		return (false);
	stack->size = size;
	stack->last_elem = -1;
	return (true);
}

bool				ft_stack_push(t_stack *stack, void *data, int data_size)
{
	if (!stack)
		return (false);
	stack->last_elem++;
	if (!data || data_size <= 0)
		stack->elems[stack->last_elem].data = data;
	else
	{
		stack->elems[stack->last_elem].data = malloc(data_size);
		if (!stack->elems[stack->last_elem].data)
			return (false);
		ft_memcpy(stack->elems[stack->last_elem].data, data, data_size);
	}
	stack->elems[stack->last_elem].size = data_size;
	return (true);
}

t_stack_elem		ft_stack_pop(t_stack *stack)
{
	if (!stack || stack->last_elem < 0)
		return ((t_stack_elem){NULL, -1});
	return (stack->elems[stack->last_elem--]);
}

t_stack_elem		ft_stack_peek(t_stack *stack)
{
	if (!stack || stack->last_elem < 0)
		return ((t_stack_elem){NULL, -1});
	return (stack->elems[stack->last_elem]);
}

void				ft_stack_free(t_stack *stack)
{
	if (!stack || stack->last_elem < 0)
		return ;
	while (stack->last_elem > -1)
	{
		if (stack->elems[stack->last_elem].size != STACK_NO_COPY)
			free(stack->elems[stack->last_elem].data);
		stack->last_elem--;
	}
	free(stack->elems);
}
