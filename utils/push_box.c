/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_box.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:00:16 by rrasezin          #+#    #+#             */
/*   Updated: 2023/03/05 05:40:25 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	to_top_a(t_stack *stack, t_stack *stack_b, int position)
{
	int	middle;

	middle = stack->size / 2;
	if (position >= middle)
	{
		while (++position < stack->size)
		{
			if (stack_b->data[stack_b->top] < stack_b->data[stack_b->top - 1])
				rotate_rr(stack, stack_b);
			else
				rotate(stack, "ra");
		}
	}
	else
	{
		while (position-- >= 0)
		{
			if (stack_b->data[stack_b->top] < stack_b->data[0])
				rev_rotate_rr(stack, stack_b);
			else
				rev_rotate(stack, "rra");
		}
	}
	return ;
}

void	check_push(t_stack *stack, t_stack *stack_a, int middle, int s_max)
{
	(void)s_max;
	if (stack->data[stack->top] < middle)
	{
		if (stack_a->data[stack_a->top] > s_max)
			rotate_rr(stack, stack_a);
		else
			rotate(stack, "rb");
	}
	else if (stack->data[stack->top] < stack->data[stack->top - 1])
	{
		if (stack_a->data[stack_a->top] > stack_a->data[stack_a->top - 1])
			swap_ss(stack_a, stack);
		else
			swap(stack, "sb");
	}
}

void	to_stack_b(t_stack *stack_a, t_stack *stack_b, t_mouve *m)
{
	if (stack_a->data[m->i] < m->max && stack_a->data[m->i] >= m->min)
	{
		to_top_a(stack_a, stack_b, m->i);
		push(stack_a, stack_b, "pb");
		check_push(stack_b, stack_a, m->middle, m->s_max);
		m->i = stack_a->top;
	}
	else if (m->j > 0 && stack_a->data[m->i] < m->s_max
		&& stack_a->data[m->i] >= m->max)
	{
		to_top_a(stack_a, stack_b, m->i);
		push(stack_a, stack_b, "pb");
		check_push(stack_b, stack_a, m->s_middle, m->s_max);
		m->i = stack_a->top;
	}
	else
		m->i--;
}

void	push_box(t_stack *stack_a, t_stack *stack_b,
		t_cpy_stack *copy, int nb_box)
{
	t_mouve	mouve;

	mouve.j = nb_box * 2;
	mouve.i = stack_a->top;
	while (mouve.j >= 0 && stack_a->size)
	{
		mouve.min = copy->chunks[mouve.j];
		mouve.middle = copy->chunks[mouve.j - 1];
		mouve.max = copy->chunks[mouve.j - 2];
		mouve.j > 0 && (mouve.s_middle = copy->chunks[mouve.j - 3]);
		mouve.j > 0 && (mouve.s_max = copy->chunks[mouve.j - 4]);
		while (mouve.i >= 0)
		{
			to_stack_b(stack_a, stack_b, &mouve);
		}
		mouve.i = stack_a->top;
		mouve.j -= 2;
	}
}
