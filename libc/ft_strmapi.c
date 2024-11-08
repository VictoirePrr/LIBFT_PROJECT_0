/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:10:59 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/08 12:44:54 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	function_test(unsigned int i, char s)
{
	if (i % 2 == 0 && s >= 'a' && s <= 'z')
		s -= 32;
	return (s);
}
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	char			*s1;
	unsigned int	i;

	i = 0;
	str = (char *)malloc(ft_strlen(s) + 1 * sizeof(char *));
	s1 = (char *)s;
	while (s1[i])
	{
		str[i] = s1[i];
		str[i] = (*f)(i, str[i]);
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char *res;
	char const *s = "dimanche, je joue aux sims.";

	res = ft_strmapi(s, &function_test);
	printf("%s\n", res);
	return (0);
}*/