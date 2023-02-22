/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ls_hundred.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:50:44 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/22 03:02:34 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_ls_hundred(t_stack *stack_a, t_stack *stack_b)
{
    t_cpy_stack copy;
	copy.data = get_copy(stack_a); 
	copy.size = stack_a->size;
    sort_copy(&copy.data);
	get_chunks(&copy, 6);
    push_box(stack_a, stack_b, &copy, 6);
	reset_box(stack_a, stack_b, &copy);
    return ;
}