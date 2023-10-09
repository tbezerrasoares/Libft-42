/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:00:24 by tbezerra          #+#    #+#             */
/*   Updated: 2023/10/09 13:04:03 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main()
{
	char	c;
	int		i;
	char	str[] = "42Porto42";
	char	str2[] = "42Porto ";
	char	str3[] = "42Porto";
	char	str4[] = "42Porto4";
	int		result;

	/*test ft_isalpha*/
	/*c = 'Q';
	printf("\nResult when 'Q' is passed: %d", ft_isalpha(c));

	c = 'q';
	printf("\nResult when 'q' is passed: %d", ft_isalpha(c));

	c='+';
	printf("\nResult '+' character is passed: %d", ft_isalpha(c));*/

	/*test ft_isdigit*/
	/*c='5';
	printf("\nResult when '5' character is passed: %d", ft_isdigit(c));

	c='+';
	printf("\nResult when '+' character is passed: %d", ft_isdigit(c));*/

	/*test ft_isalnum*/
	/*c='8';
	printf("\nResult when '5' character is passed: %d", ft_isalnum(c));

	c='d';
	printf("\nResult when 'd' character is passed: %d", ft_isalnum(c));

	c='D';
	printf("\nResult when 'D' character is passed: %d", ft_isalnum(c));

	c='@';
	printf("\nResult when '@' character is passed: %d", ft_isalnum(c));*/

	/*test ft_isacii*/
	/*c='A';
	printf("\nResult when 'A' character is passed: %d", ft_isascii(c));
	
	c=0x0a;
	printf("\nResult when '0x0a' character is passed: %d", ft_isascii(c));

	c=0x80;
	printf("\nResult when '0x80' character is passed: %d", ft_isascii(c));*/

	/*test ft_isprint*/
	/*c = 0;
	i = 0;
	printf("The print:\n");
	while (i <= 127)
	{
		if (ft_isprint(c)!= 0)
			printf("%c ", c);
		c++;
		i++;
	}*/
	
	/*test ft_strlen*/
	/*char	str[] = "42porto!";

	i = ft_strlen(str);
	printf("O tamanho do string: %i\n", i);*/

	/*test ft_toupper and ft_tolower*/
	/*c = 'A';
	i = 65;
	while (i <= 127)
	{
		if (c == 0x7f)
			break;
		printf( "%c ", ft_toupper(c));
		printf( "%c ", ft_tolower(c));
		c++;
		i++;
	}*/

	result = ft_strncmp(str, str2, 6);
	printf("Comparar os srt com o str2 %d\n", result);
	result = ft_strncmp(str2, str3, 8);
	printf("Comparar os srt2 com o str3 %d\n", result);
	result = ft_strncmp(str2, str4, 8);
	printf("Comparar os srt2 com o str4 %d\n", result);		
	
	return (0);
}
