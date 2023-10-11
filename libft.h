/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:29:53 by tbezerra          #+#    #+#             */
/*   Updated: 2023/10/11 16:56:29 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_isalpha(int);
int	ft_isdigit(int);
int	ft_isalnum(int);
int	ft_isascii(int);
int	ft_isprint(int);
size_t	ft_strlen(const char *);
int	ft_toupper(int);
int	ft_tolower(int);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int ft_atoi(const char *);
size_t	ft_strlcat(char *, const char *, size_t);
size_t	ft_strlcpy(char *, const char *, size_t);
void	*ft_memcpy(void *, const void *, size_t);
char	*ft_strrchr(const char *, int );
char	*ft_strchr(const char *, int);
void	ft_bzero(void *, size_t );
void	*ft_memset(void *, int , size_t);
void	*ft_memmove(void *, const void *, size_t);
void	*ft_memchr(const void *, int, size_t);
int	ft_memcmp(const void *s1, const void *s2, size_t n);

#endif
