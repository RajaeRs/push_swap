/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:23:03 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/20 16:56:51 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*retval;
	size_t	t;

	t = count * size;
	retval = malloc(t);
	if (!retval)
		return (NULL);
	ft_bzero(retval, t);
	return (retval);
}
