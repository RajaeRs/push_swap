/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:34:24 by rrasezin          #+#    #+#             */
/*   Updated: 2023/02/17 22:24:32 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

void	ft_bzero(void *src, size_t len);
void	*ft_calloc(size_t count, size_t size);
char	**ft_split(char *s, char c, int *size);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(const char *src);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int	    mini_atoi(char *data, int *error);
void    print_operation(char *str);

#endif