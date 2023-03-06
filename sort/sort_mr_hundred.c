/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_mr_hundred.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:51:40 by rrasezin          #+#    #+#             */
/*   Updated: 2023/03/05 06:55:43 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_mr_hundred(t_stack *stack_a, t_stack *stack_b)
{
	t_cpy_stack	copy;
	int			chunks;

	chunks = 10;
	copy.data = malloc(sizeof(int) * stack_a->size);
	if (!copy.data)
		return ;
	get_copy(stack_a, copy.data);
	copy.size = stack_a->size;
	sort_copy(&copy);
	copy.chunks = malloc(sizeof(int) * (chunks * 2) + 1);
	if (!copy.chunks)
	{
		free (copy.data);
		return ;
	}
	get_chunks(&copy, chunks, copy.chunks);
	push_box(stack_a, stack_b, &copy, chunks);
	reset_box(stack_a, stack_b, &copy);
	free(copy.chunks);
	free(copy.data);
	return ;
}
