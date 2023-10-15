/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testbonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:13:43 by tbezerra          #+#    #+#             */
/*   Updated: 2023/10/15 23:03:55 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main()
{
	/* ft_lstnew */

/* 	int data = 42;
    t_list *newElement = ft_lstnew(&data);

	if (newElement != NULL) {
		printf("Novo elemento criado com sucesso!\n");
        int *elementData = (int *)newElement->content;
        printf("Conteúdo do elemento: %d\n", *elementData);

        free(newElement);
    } else {
        printf("Falha ao criar o novo elemento.\n");
    } */

	/* ft_lstadd_front, ft_lstadd_back, ft_lstlast, ft_lstsize */

    t_list *lista = NULL;

    // Crie alguns elementos para adicionar à lista
    t_list *element1 = ft_lstnew("Elemento 1");
    t_list *element2 = ft_lstnew("Elemento 2");
    t_list *element3 = ft_lstnew("Elemento 3");
	t_list *element4 = ft_lstnew("Elemento 4");
    t_list *element5 = ft_lstnew("Elemento 5");
    t_list *element6 = ft_lstnew("Elemento 6");

    // Adicione elementos à lista usando ft_lstadd_front
    ft_lstadd_front(&lista, element3);
    ft_lstadd_front(&lista, element2);
    ft_lstadd_front(&lista, element1);

	// Adicione elementos à lista usando ft_lstadd_back
    ft_lstadd_back(&lista, element4);
    ft_lstadd_back(&lista, element5);
    ft_lstadd_back(&lista, element6);

    // Percorra a lista e imprima o conteúdo dos elementos
    t_list *current = lista;
    while (current) {
        printf("Conteúdo: %s\n", (char *)current->content);
        current = current->next;
    }

	// Use a função ft_lstsize para obter o tamanho da lista
    int tamanho = ft_lstsize(lista);

	// Imprima o tamanho da lista
    printf("Tamanho da lista: %d\n", tamanho);

    // Lembre-se de liberar a memória alocada
    free(element1);
    free(element2);
    free(element3);
	free(element4);
    free(element5);
    free(element6);
	
	return (0);
}
