/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 00:46:16 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/20 16:57:53 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	sort_copy(t_stack *stack, int *index)
{
	int	i;
	int	loop;
	int	tmp;
	int	max;

	tmp = 0;
	max = stack->size;
	loop = max;
	while (loop--)
	{
		i = 0;	
		while (i < max - 1)
		{
			if (stack->data[i] < stack->data[i + 1])
			{
				tmp = stack->data[i];
				stack->data[i] = stack->data[i + 1];
				stack->data[i + 1] = tmp;
				tmp = index[i];
				index[i] = index[i + 1];
				index[i + 1] = tmp;
			}
			i++;
		}
		max--;
	}
}