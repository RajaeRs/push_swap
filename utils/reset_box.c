/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset_box.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 05:39:17 by rrasezin          #+#    #+#             */
/*   Updated: 2023/03/05 05:40:46 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	to_top_b(t_stack *stack, int position)
{
	int	middle;

	middle = stack->size / 2;
	if (position >= middle)
	{
		while (++position < stack->size)
			rotate(stack, "rb");
	}
	else
	{
		while (position-- >= 0)
			rev_rotate(stack, "rrb");
	}
	return ;
}

void	reset_box(t_stack *stack_a, t_stack *stack_b, t_cpy_stack *copy)
{
	copy->min = 0;
	while (stack_b->top != -1)
	{
		copy->max = stack_b->top + 1;
		while (--copy->max >= 0)
		{
			if (stack_b->data[copy->max] == copy->data[copy->min])
			{
				to_top_b(stack_b, copy->max);
				push(stack_b, stack_a, "pa");
				copy->size--;
			}
		}
		copy->min++;
	}
	return ;
}
