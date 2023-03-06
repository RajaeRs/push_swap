/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:10:31 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/28 16:32:26 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rev_sort(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_a->size > 0)
		push(stack_a, stack_b, "pb");
	while (stack_b->size > 0)
	{
		if (stack_b->size != 1)
			rev_rotate(stack_b, "rrb");
		push(stack_b, stack_a, "pa");
	}
	return ;
}
