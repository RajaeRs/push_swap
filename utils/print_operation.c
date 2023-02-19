/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_operation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:01:58 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/17 17:06:56 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    print_operation(char *str)
{
    int	i;

	i = 0;
    while (str[i])
        write(1, &str[i++], 1);
    write (1, "\n", 1);
    return ;
}