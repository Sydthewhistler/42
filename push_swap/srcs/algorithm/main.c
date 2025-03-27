/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 11:00:03 by scavalli          #+#    #+#             */
/*   Updated: 2025/03/26 17:26:41 by scavalli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/header.h"

int	main(int ac, char **av)
{
	if (ac < 2 || (ac == 2 && !av[1][0]))
		return (-1);
	if (ac == 2)
		av = ft_split(av[1], ' ');
	if (check_av(av) == -1)
	{
		ft_printf("Error\n");
		return (-1);
	}
	algorithm(ac, av);
	sleep(30);
	return (0);
}
