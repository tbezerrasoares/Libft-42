/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 16:08:36 by tbezerra          #+#    #+#             */
/*   Updated: 2023/10/13 16:14:25 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newele;

	if (!(newele = (t_list *)ft_calloc(sizeof(*newele), 1)))
		return (NULL);
	newele->content = content;
	return (newele);
}
