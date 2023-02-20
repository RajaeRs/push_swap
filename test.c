/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:32:11 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/19 23:47:15 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	test(t_stack *stack)
{
	int	i;

	i = stack->top;
	while (i >= 0)
	{
		printf("%d,[%d] \n", stack->data[i], i);
		i--;
	}
	return ;
}

void	test_stacks(t_stack *stack_a, t_stack *stack_b)
{
	int	i;
	int	j;

	i = stack_a->top;
	j = stack_b->top;
	printf("j -- %d\n", j);
	printf("I | A | B \n");
	printf("----------\n");
	while (i >= 0 || j >= 0)
	{
		if (i == j)
		{
			printf("%d | %d | ", i, stack_a->data[i]);
			printf("%d\n", stack_b->data[j]);
			j--;
		}
		else 
			printf("%d | %d |\n", i, stack_a->data[i]);
		// if (j >= 0)
		// else 
		// 	printf("\n");
		i--;
	}
	return ;
}