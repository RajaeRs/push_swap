/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:00:17 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/22 05:49:02 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	size_t	size;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	size = 0;
	if (!s1)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	if (s1 || s2)
		size = size + 2;
	new = malloc(sizeof(char) * size);
	if (!new)
		return (NULL);
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	new[i++] = ' ';
	while (s2[j] != '\0')
		new[i++] = s2[j++];
	new[i] = '\0';
	// free (s1);
	return (new);
}
