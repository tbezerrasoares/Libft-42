/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlstmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:35:36 by tbezerra          #+#    #+#             */
/*   Updated: 2023/10/16 16:38:03 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// Definição da estrutura t_list (pode variar dependendo da sua implementação)
/* typedef struct s_list {
    void *content;
    struct s_list *next;
} t_list; */

// Função para criar um novo nó com um número inteiro
t_list *ft_lstnewint(int data) {
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (new_node) {
        int *content = (int *)malloc(sizeof(int));
        *content = data;
        new_node->content = content;
        new_node->next = NULL;
    }
    return new_node;
}

// Função que aplica uma transformação a um número inteiro
void *square_number(void *data) {
    int *number = (int *)data;
    int *result = (int *)malloc(sizeof(int));
    *result = (*number) * (*number);
    return result;
}

// Função para liberar a memória de um número inteiro
void delete_number(void *data) {
    free(data);
}

// Função para imprimir o conteúdo de uma lista
void print_list(t_list *lst) {
    while (lst) {
        int *number = (int *)lst->content;
        printf("%d ", *number);
        lst = lst->next;
    }
    printf("\n");
}

// Função que aplica a função ft_lstmap para criar uma nova lista com números ao quadrado
t_list *map_square_numbers(t_list *lst) {
    return ft_lstmap(lst, &square_number, &delete_number);
}

int main() {
    t_list *lista = NULL;

    // Crie alguns elementos para adicionar à lista
    t_list *element1 = ft_lstnewint(2);
    t_list *element2 = ft_lstnewint(4);
    t_list *element3 = ft_lstnewint(6);

    // Adicione elementos à lista
    element1->next = element2;
    element2->next = element3;
    lista = element1;

    printf("Lista original: ");
    print_list(lista);

    // Aplique a função map_square_numbers para criar uma nova lista com números ao quadrado
    t_list *new_list = map_square_numbers(lista);

    printf("Nova lista com números ao quadrado: ");
    print_list(new_list);

    return 0;
}
