/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variables.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:51:03 by rrasezin          #+#    #+#             */
/*   Updated: 2023/03/06 12:57:00 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VARIABLES_H
# define VARIABLES_H

typedef struct s_stack
{
	int	*data;
	int	size;
	int	top;
}			t_stack;

typedef struct s_mouve
{
	int	i;
	int	j;
	int	max;
	int	s_max;
	int	min;
	int	middle;
	int	s_middle;
}			t_mouve;

typedef struct s_cpy_stack
{
	int		max;
	int		min;
	int		middle;
	int		s_middle;
	int		s_max;
	int		size;
	int		ck_size;
	int		*data;
	int		*chunks;
}			t_cpy_stack;

#endif