/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:15:05 by tbezerra          #+#    #+#             */
/*   Updated: 2023/10/16 12:47:25 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;
	int		len;

	i = -1;
	len = ft_strlen(s);
	dest = (char *)malloc(sizeof(*dest) * len + 1);
	if (!dest)
		return (NULL);
	while (i++ <= len)
		dest[i] = s[i];
	return (dest);
}
