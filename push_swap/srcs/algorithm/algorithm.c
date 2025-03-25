/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:19:58 by scavalli          #+#    #+#             */
/*   Updated: 2025/03/25 16:35:11 by scavalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/header.h"

bool	check_if_sorted(t_stack *lst)
{
	if (!lst)
		return (1);
	while (lst && lst->next)
	{
		if (lst->next->content < lst->content)
			return (false);
		lst = lst->next;
	}
	return (true);
}

int	algorithm(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	stack_a = initialise_stack_a(ac, av, &stack_a);
	if (!check_if_sorted(stack_a))
	{
		if (stack_size(stack_a) == 2)
		{
			ft_printf("sa\n");
			ft_lstclear_stack(stack_a);
			return (0);
		}
		else if (stack_size(stack_a) == 3)
			sort_three(&stack_a);
		else
			sort_turk(&stack_a, &stack_b);
	}
	ft_lstclear_stack(stack_a);
	return (0);
}
