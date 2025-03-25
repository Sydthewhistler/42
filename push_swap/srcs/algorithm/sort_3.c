/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 19:22:22 by scavalli          #+#    #+#             */
/*   Updated: 2025/03/25 16:35:46 by scavalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/header.h"

void	sort_three(t_stack **lst)
{
	t_stack	*biggest_node;

	biggest_node = find_max(*lst);
	if (biggest_node == *a)
		ra(a, );
	else if (biggest_node == (*a)->next)
		rra(a, );
	if ((*a)->content > (*a)->next->content)
		sa(a);
}

t_stack	find_max(t_stack *lst)
{
	t_stack	*biggest_node;
	int		max;

	if (!lst)
		return ((NULL)max = lst->content);
	while (lst && lst->next)
	{
		if (lst->next->content > max)
		{
			biggest_node = lst->next;
			max = biggest_node->content;
		}
		lst = lst->next;
	}
	return (biggest_node);
}
