/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialise_stack_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 17:04:10 by scavalli          #+#    #+#             */
/*   Updated: 2025/03/25 16:35:17 by scavalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/header.h"

t_stack	initialise_stack_a(int ac, char **av, t_stack *stack_a)
{
	size_t	i;
	t_stack	first_node;

	i = 1;
	while (i < ac)
	{
		if (i == 1)
		{
			first_node = ft_lst_add_new_last(stack_a, ft_atoi(av[i]), i);
			i++;
		}
		else
		{
			ft_lst_add_new_last(stack_a, ft_atoi(av[i]), i);
			i++;
		}
	}
	return (first_node);
}
