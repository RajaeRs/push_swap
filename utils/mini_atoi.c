/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:43:42 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/20 16:58:35 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int	mini_atoi(char *data, int *error)
{
	int		i;
	int		signe;
	long	result;

	signe = 1;
	i = 0;
	result = 0;
	if (data[i] == '+' || data[i] == '-')
	{
		if (data[i++] == '-')
			signe = -1;
        if (data[i] == '\0')
            (*error) = 1;
	}
	while (data[i] >= '0' && data[i] <= '9')
		result = result * 10 + data[i++] - '0';
	if (data[i] != '\0')
		(*error) = 1;
	if (result > 2147473647 || result < -2147473648 || (result == -1 && data[1] != '1') )
		(*error) = 1;
	return(result*signe);
}
