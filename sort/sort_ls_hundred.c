/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ls_hundred.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:50:44 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/20 23:22:43 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_ls_hundred(t_stack *stack_a, t_stack *stack_b)
{
    t_cpy_stack copy;

	copy.index = malloc(sizeof(int) * stack_a->size);
	copy.data = get_copy(stack_a, copy.index); 
    sort_copy(&copy.data, copy.index);
    push_box(stack_a, stack_b, &copy, 6);
	// while (stack_a->size > 3)
	// 	push(stack_a, stack_b, "pb");
	// sort_three(stack_a);
	reset_box(stack_a, stack_b, &copy);
	// test(stack_a);
    return ;
}