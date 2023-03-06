/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 16:50:26 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/28 16:27:34 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_stack *stack, char *name)
{
	int	i;
	int	tmp;

	tmp = stack->data[stack->top];
	i = stack->top;
	while (i > 0)
	{
		stack->data[i] = stack->data[i - 1];
		i--;
	}
	stack->data[i] = tmp;
	if (name != NULL)
		print_operation(name);
	return ;
}

void	rotate_rr(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a, NULL);
	rotate(stack_b, NULL);
	print_operation("rr");
}
