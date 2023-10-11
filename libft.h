/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:29:53 by tbezerra          #+#    #+#             */
/*   Updated: 2023/10/11 10:32:27 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>

int	ft_isalpha(int);
int	ft_isdigit(int);
int	ft_isalnum(int);
int	ft_isascii(int);
int	ft_isprint(int);
size_t	ft_strlen(const char *);
int	ft_toupper(int);
int	ft_tolower(int);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int atoi(const char *);

#endif
