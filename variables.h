/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variables.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:51:03 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/22 01:33:00 by rrasezin         ###   ########.fr       */
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
	t_stack	data;
	int		ck_size;
	int		*chunks;
}			t_cpy_stack;

#endif