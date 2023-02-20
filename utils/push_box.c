/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_box.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:00:16 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/20 23:36:24 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	to_top_a(t_stack *stack, int position)
{
	int	middle;

	middle = stack->size / 2;
	if (position >= middle)
	{
		while (++position < stack->size)
			rotate(stack, "ra");
	}
	else
	{
		while (position-- >= 0)
			rev_rotate(stack, "rra");	
	}
	return ;
}

void	to_top_b(t_stack *stack, int position)
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

// void	best_pos(t_stack *stack)
// {
// 	if (stack->top < 1)
// 		return ;
// 	if (stack->data[stack->top] < stack->data[stack->top - 1])
// 		rotate(stack, "rb");
// 	return ;
// }

void	push_box(t_stack *stack_a, t_stack *stack_b, t_cpy_stack *copy, int nb_box)
{
	int	i;
	int max;
	int min;
	int	size_box;
	int same;

	i = stack_a->top;
	same = 0;
	copy->size = stack_a->size;
	size_box = (copy->size / nb_box);
	max = copy->data.data[size_box * (nb_box - 1) + 1];
	min = copy->data.data[copy->size - 1];
	while (nb_box > 0)
	{
		while (i >= 0)
		{
			if (stack_a->data[i] < max && stack_a->data[i] >= min)
			{
				to_top_a(stack_a, i);
				push(stack_a, stack_b, "pb");
				// best_pos(stack_b);
				i = stack_a->top;
			}
			else
				i--;
		}
		i = stack_a->top;
		nb_box--;
		min = max;
		max = copy->data.data[size_box * (nb_box - 1) + 1];
		if (nb_box == 1)
			max = copy->data.data[0];
	}
}

void	reset_box(t_stack *stack_a, t_stack *stack_b, t_cpy_stack *copy)
{
	int	i;
	int	max;
	int j;

	i = stack_b->top;
	j = 0;
	max = copy->data.data[j];
	while (stack_b->top != -1)
	{
		i = stack_b->top;
		while (i >= 0)
		{
			if (stack_b->data[i] == max)
			{
				to_top_b(stack_b, i);
				push(stack_b, stack_a, "pa");
				i = stack_b->top;
				copy->data.size--;
			}
			else
				i--;
		}
		max = copy->data.data[j++];
	}
}