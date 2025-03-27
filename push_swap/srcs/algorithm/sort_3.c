/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:22:22 by scavalli          #+#    #+#             */
/*   Updated: 2025/03/26 16:29:39 by scavalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/header.h"

void	sort_three(t_stack **stack)
{
	t_stack	*biggest_node;

	biggest_node = find_max(*stack);
	if (biggest_node == *stack)
		ra(stack);
	else if (biggest_node == (*stack)->next)
		rra(stack);
	if ((*stack)->content > (*stack)->next->content)
		sa(stack);
}

t_stack	*find_max(t_stack *stack)
{
	t_stack	*biggest_node;
	int		max;

	if (!stack)
		return (NULL);
	max = stack->content;
	while (stack && stack->next)
	{
		if (stack->next->content > max)
		{
			biggest_node = stack->next;
			max = biggest_node->content;
		}
		stack = stack->next;
	}
	return (biggest_node);
}
