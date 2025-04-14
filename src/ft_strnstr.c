/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:46:40 by ljessica          #+#    #+#             */
/*   Updated: 2025/04/11 18:00:26 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (n == 0)
		return (NULL);
	while (big[i])
}
int main(void)
{
	char agulha[] = "AGULHA";
	char palheiro[] = "palheiropalheiro_AGULHA_palheiro";
	ft_strnstr(palheiro, agulha, 6);
	return (0);
}*/
#include <stdio.h>

char* my_strnstr(const char* str, const char* substr, size_t len) 
	{
    if (*substr == '\0')
        return (char*)str;

    while (*str != '\0' && len > 0) {
        const char* s = str;
        const char* sub = substr;
        size_t remaining_len = len;

        while (*s != '\0' && *sub != '\0' && *s == *sub && remaining_len > 0) {
            s++;
            sub++;
            remaining_len--;
        }
        if (*sub == '\0') {
            return (char*)str; 
        }
        str++;   // Avança um caractere na string principal
        len--;
    }
    return NULL;
}

int main() {
    const char* texto = "exemplo de busca";
    const char* sub = "de";
    size_t limite = 10;
    char* resultado = my_strnstr(texto, sub, limite);
    if (resultado != NULL) {
        printf("Substring encontrada: %s\n", resultado);
    } else {
        printf("Substring não encontrada\n");
    }

    return 0;
}
