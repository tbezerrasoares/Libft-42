/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:29:53 by tbezerra          #+#    #+#             */
/*   Updated: 2023/10/15 22:57:25 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_list
{
	void	*content;
	struct	s_list *next;
}			t_list;

/* Part 1 */
int		ft_isalpha(int);
int		ft_isdigit(int);
int		ft_isalnum(int);
int		ft_isascii(int);
int		ft_isprint(int);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_toupper(int);
int		ft_tolower(int);
int		ft_strncmp(char *, char *, unsigned int);
int		ft_atoi(const char *);
size_t	ft_strlen(const char *);
size_t	ft_strlcat(char *, const char *, size_t);
size_t	ft_strlcpy(char *, const char *, size_t);
char	*ft_strrchr(const char *, int );
char	*ft_strchr(const char *, int);
char	*ft_strnstr(const char *, const char *, size_t);
char	*ft_strdup(const char *);
void	*ft_memcpy(void *, const void *, size_t);
void	*ft_calloc(size_t, size_t);
void	ft_bzero(void *, size_t );
void	*ft_memset(void *, int , size_t);
void	*ft_memmove(void *, const void *, size_t);
void	*ft_memchr(const void *, int, size_t);


/* Bonus */
t_list	*ft_lstnew(void *);
void	ft_lstadd_front(t_list **, t_list *);
void	ft_lstadd_back(t_list **, t_list *);
int		ft_lstsize(t_list *);
t_list	*ft_lstlast(t_list *);

#endif
