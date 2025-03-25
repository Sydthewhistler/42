/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:27:08 by scavalli          #+#    #+#             */
/*   Updated: 2025/03/25 16:36:17 by scavalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/header.h"

t_stack	ft_lst_add_new_last(t_stack *list, int content, int index)
{
	t_stack	*new;

	while (list && list->next)
		list = list->next;
	new->content = content;
	new->index = index;
	list->next = new;
	new->previous = list;
	return (new);
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
