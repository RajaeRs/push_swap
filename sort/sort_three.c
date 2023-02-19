/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:41:47 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/19 23:06:59 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_stack *stack)
{
	int	*data;

	data = stack->data;
	if (is_sorted(stack) == 0)
		return ;
	if (data[0] < data[1] && data[0] < data[2] && data[1] < data[2])
	{
		rotate(stack, "ra");
		swap(stack, "sa");
	}
	else if (data[0] < data[1] && data[0] < data[2] && data[2] < data[1])
		rev_rotate(stack, "rra");
	else if (data[1] < data[2] && data[1] < data[0] && data[2] < data[0])
		swap(stack, "sa");
	else if (data[2] < data[0] && data[2] < data[1] && data[0] < data[1])
	{
		rev_rotate(stack, "rra");
		swap(stack, "sa");	
	}
	else
		rotate(stack, "ra");
	return ;
}