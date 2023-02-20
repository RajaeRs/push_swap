/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variable.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:51:03 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/20 16:52:52 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VARIABLES_H
# define VARIABLES_H

typedef	struct s_stack
{
	int	size;
	int	top;
	int	*data;
}			t_stack;

typedef	struct s_cpy_stack
{
	int		size;
	int		start;
	int		end;
	int		*index;
	t_stack	data;
}			t_cpy_stack;

#endif