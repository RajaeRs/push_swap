/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrasezin <rrasezin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:34:24 by rrasezin          #+#    #+#             */
/*   Updated: 2023/03/06 13:30:06 by rrasezin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <unistd.h>
# include <stdlib.h>
# include "../variables.h"

void	ft_bzero(void *src, size_t len);
void	*ft_calloc(size_t count, size_t size);
char	**ft_split(char *s, char c, int *size);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(const char *src);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		mini_atoi(char *data, int *error);
void	print_operation(char *str);
void	get_min_to_top(t_stack *stack);
void	get_copy(t_stack *stack, int *copy);
void	sort_copy(t_cpy_stack *stack);
void	get_chunks(t_cpy_stack *copy, int box, int *chunks);
void	free_list(char **list);
int		speac(char *str);

#endif