/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_tree_rotations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleonard <sleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 18:24:28 by sleonard          #+#    #+#             */
/*   Updated: 2019/10/24 19:04:32 by sleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btrees.h"

t_avl_tree	*avl_rotate_right(t_avl_tree *p_node)
{
	t_avl_tree	*q_node;

	q_node = p_node->left;
	p_node->left = q_node->right;
	q_node->right = p_node;
	avl_fixheight(p_node);
	avl_fixheight(q_node);
	return (q_node);
}

t_avl_tree	*avl_rotate_left(t_avl_tree *q_node)
{
	t_avl_tree	*p_node;

	p_node = q_node->right;
	q_node->right = p_node->left;
	p_node->left = q_node;
	avl_fixheight(q_node);
	avl_fixheight(p_node);
	return (p_node);
}

t_avl_tree	*avl_rebalance(t_avl_tree *p_node)
{
	avl_fixheight(p_node);
	if (avl_bfactor(p_node) == 2)
	{
		if (avl_bfactor(p_node->right) < 0)
			p_node->right = avl_rotate_right(p_node->right);
		return (avl_rotate_left(p_node));
	}
	if (avl_bfactor(p_node) == -2)
	{
		if (avl_bfactor(p_node->left) > 0)
			p_node->left = avl_rotate_left(p_node->left);
		return (avl_rotate_right(p_node));
	}
	return (p_node);
}