/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testbonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 21:13:43 by tbezerra          #+#    #+#             */
/*   Updated: 2023/10/16 16:50:08 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	delete(void *content) {
	free(content);
}

void print_listchar(t_list *lst) {
    while (lst) {
        printf("%s ", (char *)lst->content);
        lst = lst->next;
    }
    printf("\n");
}

void print_listint(t_list *lst) {
    while (lst) {
        int *number = (int *)lst->content;
        printf("%d ", *number);
        lst = lst->next;
    }
    printf("\n");
}

void print_length(void *content) {
    char *str = (char *)content;
    printf("Tamanho da string: %lu\n", strlen(str));
}

void *square_number(void *data) {
    int *number = (int *)data;
    int *result = (int *)malloc(sizeof(int));
    *result = (*number) * (*number);
    return result;
}

t_list *map_square_numbers(t_list *lst) {
    return ft_lstmap(lst, &square_number, &delete);
}

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

/*     t_list *lista = NULL;

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
	t_list *previous = NULL;
	print_list(current);

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
    free(element6); */

	/* ft_lstdelone and ft_lstclear */
/* 	t_list *lista = NULL;

    // Crie alguns elementos para adicionar à lista
    t_list *element1 = ft_lstnew("Elemento 1");
    t_list *element2 = ft_lstnew("Elemento 2");
    t_list *element3 = ft_lstnew("Elemento 3");

    // Adicione elementos à lista usando ft_lstadd_front
    element1->next = element2;
    element2->next = element3;
    lista = element1;

    printf("Lista antes de limpar: ");
    print_list(lista);

    // Chame a função ft_lstclear para liberar a memória
    ft_lstclear(&lista, &delete);

    printf("Lista após a limpeza: ");
    //print_list(lista); // Deve ser uma lista vazia */


	/* ft_lstiter */
/* 	t_list *lista = NULL;

    // Crie alguns elementos para adicionar à lista
    t_list *element1 = ft_lstnew("Elemento 10");
    t_list *element2 = ft_lstnew("Elemento 20");
    t_list *element3 = ft_lstnew("Elemento 30");

    // Adicione elementos à lista
    element1->next = element2;
    element2->next = element3;
    lista = element1;

    printf("Lista original: ");
    print_list(lista);

    // Chame a função ft_lstiter para aplicar a função print_length a todos os elementos
    ft_lstiter(lista, &print_length); */

	/* ft_lstmap */

	t_list *lista = NULL;
	int	a = 2;
	int	b = 4;
	int	c = 6;

    // Crie alguns elementos para adicionar à lista
    t_list *element1 = ft_lstnew(&a);
    t_list *element2 = ft_lstnew(&b);
    t_list *element3 = ft_lstnew(&c);

    // Adicione elementos à lista
    element1->next = element2;
    element2->next = element3;
    lista = element1;

    printf("Lista original: ");
    print_listint(lista);

    // Aplique a função map_square_numbers para criar uma nova lista com números ao quadrado
    t_list *new_list = map_square_numbers(lista);

    printf("Nova lista com números ao quadrado: ");
    print_listint(new_list);
	
	return (0);
}
