/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:24:17 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/19 23:17:52 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int	error;
	t_stack stack_a;

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
	// test(&stack_a);
	sort_data(&stack_a);
	// rev_rotate(&stack_a, "rra");
	// swap(&stack_a, "sa");
	// test(&stack_a);
}

	// stack_b.data = malloc(sizeof(int) * stack_a.size);
	// stack_b.size = stack_b.size;
	// stack_b.top = -1;