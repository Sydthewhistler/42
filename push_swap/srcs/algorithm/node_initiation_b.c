/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_initiation_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:44:17 by scavalli          #+#    #+#             */
/*   Updated: 2025/03/26 16:24:58 by scavalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/header.h"

static void	set_target_b(t_stack *stack_a, t_stack *stack_b)
{
	int		target_value;
	t_stack	*first_node_a;

	first_node_a = stack_a;
	target_value = -2147483648;
	while (stack_b)
	{
		while (stack_a)
		{
			if ((stack_a->content > stack_b->content)
				&& (stack_a->content >= target_value))
			{
				stack_b->target = stack_a;
				target_value = stack_a->content;
			}
			stack_a = stack_a->next;
		}
		stack_a = first_node_a;
		if (!stack_b->target)
			stack_b->target = find_min(stack_a);
		stack_a = stack_a->next;
	}
}

void	node_initiation_b(t_stack *stack_a, t_stack *stack_b)
{
	define_index(stack_a);
	define_index(stack_b);
	set_target_b(stack_a, stack_b);
}

t_stack	*find_min(t_stack *stack_a)
{
	int		min;
	t_stack	*min_node;

	min = stack_a->content;
	while (stack_a)
	{
		if (stack_a->content < min)
		{
			min = stack_a->content;
			min_node = stack_a;
		}
		stack_a = stack_a->next;
	}
	return (min_node);
}
