/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:24:17 by rrasezin          #+#    #+#             */
/*   Updated: 2023/03/06 13:27:51 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	stack_a;
	int		error;

	stack_a.top = -1;
	error = get_data(ac, av, &stack_a);
	if (error != 0)
	{
		if (error == 2)
			write(2, "Error\n", 6);
		exit (1);
	}
	if (is_sorted(&stack_a) == 0)
	{
		free (stack_a.data);
		exit (0);
	}
	else
	{
		sort_data(&stack_a);
		free(stack_a.data);
	}
	return (0);
}
