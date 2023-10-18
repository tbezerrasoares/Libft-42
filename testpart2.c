/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testpart2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbezerra <tbezerra@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:20:44 by tbezerra          #+#    #+#             */
/*   Updated: 2023/10/18 16:52:48 by tbezerra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char example_mapping(unsigned int index, char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32; // Transforma caracteres minúsculos em maiúsculos
    }
    return c;
}

void example_function(unsigned int index, char *c) {
    printf("Índice: %u, Caractere: %c\n", index, *c);
}


int main() {
    
	/* ft_strsubstr */
/* 	const char *input_string = "Esta é uma string de teste";
    unsigned int start = 0;
    size_t length = 18;

    char *result = ft_substr(input_string, start, length);

    if (result) {
        printf("Substring: %s\n", result);
        free(result); // Não se esqueça de liberar a memória alocada pela função ft_substr.
    } else {
        printf("Erro: a substring não pôde ser criada.\n");
    } */

	/* ft_strjoin */
/* 	const char *string1 = "Olá, ";
    const char *string2 = "mundo!";

    char *result = ft_strjoin(string1, string2);

    if (result) {
        printf("String concatenada: %s\n", result);
        free(result); // Não se esqueça de liberar a memória alocada pela função ft_strjoin.
    } else {
        printf("Erro: a concatenação não pôde ser realizada.\n");
    } */

	/* ft_strtrim */
/* 	const char *input_string = "42Olá, mundo!42";
    const char *set = "42";

    char *result = ft_strtrim(input_string, set);

    if (result) {
        printf("String após a remoção dos caracteres de set: \"%s\"\n", result);
        free(result); // Não se esqueça de liberar a memória alocada pela função ft_strtrim.
    } else {
        printf("Erro: a função ft_strtrim não pôde ser executada.\n");
    }
 */

	/* ft_strmapi */

/* 	const char *input_string = "Hello, World!";
	printf("String: \"%s\"\n", input_string);

    char *result = ft_strmapi(input_string, example_mapping);

    if (result) {
        printf("String após a transformação: \"%s\"\n", result);
        free(result); // Não se esqueça de liberar a memória alocada pela função ft_strmapi.
    } else {
        printf("Erro: a função ft_strmapi não pôde ser executada.\n");
    } */

	/* ft_striteri */
/* 	char input_string[] = "Hello";

    ft_striteri(input_string, example_function); */

	/* ft_putchar_fd */
/* 	char character = 'A';

    // Escreve o caractere 'A' na saída padrão (stdout)
    ft_putchar_fd(character, STDOUT_FILENO);

    // Escreve o caractere 'B' na saída de erro padrão (stderr)
    ft_putchar_fd('B', STDERR_FILENO); */

 	/* ft_putsrt_fd ft_putendle_fd ft_putnbr_fd */
/*	char *message = "Hello, World!";
    
    // Escreve a mensagem na saída padrão (stdout)
    ft_putendl_fd(message, STDOUT_FILENO);

    // Escreve a mensagem na saída de erro padrão (stderr)
    ft_putstr_fd(message, STDERR_FILENO);

	// Escreve o número na saída de erro padrão (stderr)
    ft_putnbr_fd(-0, STDERR_FILENO); */

	/* ft_itoa */

	int test_numbers[] = {0, 12345, -6789, 42, -9876};
    
    for (int i = 0; i < sizeof(test_numbers) / sizeof(test_numbers[0]); i++) {
        char *result = ft_itoa(test_numbers[i]);

        if (result) {
            printf("Número: %d, Representação de String: %s\n", test_numbers[i], result);
            free(result); // Não se esqueça de liberar a memória alocada pela função ft_itoa.
        } else {
            printf("Erro: a função ft_itoa não pôde ser executada.\n");
        }
    }

    return 0;
}