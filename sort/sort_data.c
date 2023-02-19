/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:26:03 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/19 23:15:12 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_data(t_stack *stack_a)
{
	t_stack stack_b;

	if (stack_a->size == 2)
		swap(stack_a, "sa");
	else if (stack_a->size == 3)
		sort_three(stack_a);
	else 
	{
		stack_b.data = malloc(sizeof(int) * stack_a->size);
		stack_b.size = 0;
		stack_b.top = -1;
		if (stack_a->size > 3 && stack_a->size <= 5)
			sort_five(stack_a, &stack_b);
		else if (is_rev_sorted(stack_a) != 0)
		{
			if (stack_a->size > 5 && stack_a->size <= 100)
				sort_ls_hundred(stack_a, &stack_b);
			else
				sort_mr_hundred(stack_a, &stack_b);
		}
		else
			rev_sort(stack_a, &stack_b);
		free (stack_b.data);
	}
	free(stack_a->data);
	return ;
}