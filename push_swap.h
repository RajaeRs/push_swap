/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:06:45 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/19 17:25:26 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "utils/libft.h"

typedef	struct s_stack
{
	int	size;
	int	top;
	int	*data;
}			t_stack;

// typedef	struct s_stack
// {
// 	int	size;
// 	int	top;
// 	int	*data;
// }			t_stack;

void	test(t_stack *stack);

int		get_data(int ac, char **av, t_stack *data);
int		is_sorted(t_stack *data);
int		is_rev_sorted(t_stack *data);
void    swap(t_stack *stack, char *name);
void    rotate(t_stack *stack, char *name);
void    rotate_rr(t_stack *stack_a, t_stack *stack_b);
void    swap(t_stack *stack, char *name);
void    swap_ss(t_stack *stack_a, t_stack *stack_b);
void    rev_rotate(t_stack *stack, char *name);
void	rev_rotate_rr(t_stack *stack_a, t_stack *stack_b);
void    push(t_stack *stack_from, t_stack *stack_to, char *name);
void	sort_data(t_stack *stack_a);
void	sort_three(t_stack *stack);
void	rev_sort(t_stack *stack_a, t_stack *stack_b);
void	sort_five(t_stack *stack_a, t_stack *stack_b);
void	sort_ls_hundred(t_stack *stack_a, t_stack *stack_b);
void	sort_mr_hundred(t_stack *stack_a, t_stack *stack_b);
void	get_min_to_top(t_stack *stack);
void	get_max_to_top(t_stack *stack);
t_stack	get_copy(t_stack *stack);

#endif