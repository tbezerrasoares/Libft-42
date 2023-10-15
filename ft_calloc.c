/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:02:27 by tbezerra          #+#    #+#             */
/*   Updated: 2023/10/13 12:05:21 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*res;

	if(!(res = (char *)malloc(elsize * nelem)))
		return (NULL);
	ft_bzero(res, elsize * nelem);
	return (res);
}
