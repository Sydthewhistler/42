/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:42:30 by scavalli          #+#    #+#             */
/*   Updated: 2025/03/25 16:36:55 by scavalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/header.h"

void	rrr(t_stack **stack_from, t_stack **stack_to)
{
	reverse_rotate(stack_from);
	reverse_rotate(stack_to);
	ft_printf("rrr\n");
}

void	rr(t_stack **stack_from, t_stack **stack_to)
{
	rotate(stack_from);
	rotate(stack_to);
	ft_printf("rr\n");
}

void	put_min_top(t_stack **top_node)
{
	t_stack	min_node;

	min_node = find_min(*top_node);
	while (top_node != min_node)
	{
		if (top_node->position_from_median)
			ra(stack);
		else
			rra(stack);
	}
}

t_stack	*find_last(t_stack *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}
