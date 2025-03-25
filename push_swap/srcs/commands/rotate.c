/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:58:03 by scavalli          #+#    #+#             */
/*   Updated: 2025/03/25 16:36:02 by scavalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/header.h"

void	rotate(t_stack **stack)
{
	t_stack	*last_node;

	if (!*stack || !(*stack)->next)
		return ;
	last_node = find_last(*stack);
	last_node->next = *stack;
	*stack = (*stack)->next;
	(*stack)->previous = NULL;
	last_node->next->previous = last_node;
	last_node->next->next = NULL;
}

void	ra(t_stack **stack)
{
	rotate(stack);
	ft_printf("ra\n");
}

void	rb(t_stack **stack)
{
	rotate(stack);
	ft_printf("rb\n");
}
