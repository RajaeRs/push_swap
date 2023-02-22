/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_mr_hundred.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:51:40 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/22 05:37:38 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_mr_hundred(t_stack *stack_a, t_stack *stack_b)
{
    t_cpy_stack copy;
    int         chunks = 10;

	copy.data = get_copy(stack_a); 
	copy.size = stack_a->size;
    sort_copy(&copy.data);
	get_chunks(&copy, chunks);
    push_box(stack_a, stack_b, &copy, chunks);
	reset_box(stack_a, stack_b, &copy);
    return ;
}