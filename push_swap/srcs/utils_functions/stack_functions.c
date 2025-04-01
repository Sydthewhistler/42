/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:27:08 by scavalli          #+#    #+#             */
/*   Updated: 2025/03/30 18:28:40 by scavalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/header.h"

void	ft_lst_add_new_last(t_stack **stack, int content)
{
	t_stack	*node;
	t_stack	*last_node;

	if (!stack)
		return ;
	node = malloc(sizeof(t_stack));
	if (!node)
		return ;
	node->next = NULL; 
	node->content = content;
	node->cheapest = 0;
	if (!(*stack))
	{
		*stack = node;
		node->previous = NULL;
	}
	else
	{
		last_node = find_last(*stack); //In which case, find the last node
		last_node->next = node; //Append the new node to the last node
		node->previous = last_node; //Update the previous pointer of the new node and complete the appending
	}
}

void	ft_lstclear_stack(t_stack **lst)
{
	t_stack	*copy;

	if (!*lst || !lst)
		return ;
	while (*lst)
	{
		copy = *lst;
		*lst = (*lst)->next;
		free(copy);
	}
}

unsigned int	stack_size(t_stack *stack_a)
{
	int	size;

	if (!stack_a)
		return (0);
	size = 0;
	while (stack_a)
	{
		size++;
		stack_a = stack_a->next;
	}
	return (size);
}

void display_stack(t_stack *stack)
{
	while (stack)
	{
		ft_printf("%d\n", stack->content);
		stack = stack->next;
	}
}

void display_target_stack(t_stack *stack)
{
	while (stack && stack->target)
	{
		ft_printf("%d\n", stack->target->content);
		stack = stack->next;
	}
}

void	check_sorted_stack(t_stack *stack)
{
    if (!stack)
    {
        ft_printf("Empty stack\n");
        return;
    }
    while (stack->next)
    {
        if (stack->content > stack->next->content)
        {
            ft_printf("Stack is not sorted\n");
            return;
        }
        stack = stack->next;
    }
    ft_printf("sorted stack OK\n");
}