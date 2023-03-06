/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 06:12:51 by rrasezin          #+#    #+#             */
/*   Updated: 2023/03/05 06:13:55 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	free_list(char **list)
{
	int	i;

	i = 0;
	while (list[i])
		free(list[i++]);
	free(list);
	return ;
}

int	speac(char *str)
{
	int	i;

	i = 0;
	while (str && str[i] == ' ')
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}
