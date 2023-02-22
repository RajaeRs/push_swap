/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_box.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:00:16 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/22 07:41:30 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	to_top_a(t_stack *stack_a, t_stack *stack_b, int position, int middle_b)
{
	int	middle;
	(void)stack_b;
	(void)middle_b;
	middle = stack_a->size / 2;
	if (position >= middle)
	{
		while (++position < stack_a->size)
			rotate(stack_a, "ra");
	}
	else
	{
		while (position-- >= 0)
			rev_rotate(stack_a, "rra");
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

void	check_push(t_stack *stack, int middle)
{
	if (stack->data[stack->top] < middle)
		rotate(stack, "rb");
	else if (stack->data[stack->top] < stack->data[stack->top - 1])
		swap(stack, "sb");
}

void	push_box(t_stack *stack_a, t_stack *stack_b, t_cpy_stack *copy, int nb_box)
{
	int	i;
	int j;
	int max;
	int middle;
	int min;
	int s_max;
	int s_middle;
	
	j = nb_box * 2;
	i = stack_a->top;
	while (j >= 0)
	{
		min = copy->chunks[j];
		middle = copy->chunks[j-1];
		max = copy->chunks[j - 2];
		j > 0 && (s_middle = copy->chunks[j-3]);
		j > 0 && (s_max = copy->chunks[j - 4]);
		while (i >= 0)
		{
			if (stack_a->data[i] < max && stack_a->data[i] >= min)
			{
				to_top_a(stack_a, stack_b, i, middle);
				push(stack_a, stack_b, "pb");
				check_push(stack_b, middle);
				i = stack_a->top;
			}
			else if (j > 0 && stack_a->data[i] < s_max && stack_a->data[i] >= max)
			{
				to_top_a(stack_a, stack_b, i, s_middle);
				push(stack_a, stack_b, "pb");
				check_push(stack_b, s_middle);
				i = stack_a->top;
			}
			else
				i--;
		}
		i = stack_a->top;
		j -= 2;
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
				// i = stack_b->top;
				copy->data.size--;
			}
			// else
				i--;
		}
		max = copy->data.data[j++];
	}
}

