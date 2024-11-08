/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:28:07 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/07 13:43:09 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;

    i = 0;
    str = (char *)malloc(len * sizeof(char));
    if (!(str))
        return (0);
    while (len--)
        str[i++] = s[start++];
    return (str);
}
/*
int main()
{
    char const s[] = "Bonjour jeune terrien.";
    char *res;

    res = ft_substr(s, 8, 5);
    printf("resultat : %s||\n", res);
    return 0;
}*/
