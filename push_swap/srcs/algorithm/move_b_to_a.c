/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 13:32:26 by scavalli          #+#    #+#             */
/*   Updated: 2025/03/25 16:35:32 by scavalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/header.h"

void	move_b_to_a(t_stack **stack_a, t_stack **stack_b)
{
	prep_for_push(a, (*stack_b)->target, A);
	pa(stack_a, stack_b);
}
