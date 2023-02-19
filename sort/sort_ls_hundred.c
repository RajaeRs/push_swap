/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ls_hundred.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 22:50:44 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/19 16:25:33 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_ls_hundred(t_stack *stack_a, t_stack *stack_b)
{
    t_stack data;
    (void) stack_a;
    (void) stack_b;

    data = get_copy(stack_a);
    test(stack_a);
    printf("\n");
    test(&data);
    return ;
}