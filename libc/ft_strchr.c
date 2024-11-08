/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:20:36 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/05 14:24:20 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	c1;
	char	*s1;
	int		i;

	c1 = (char)c;
	s1 = (char *)s;
	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			return (&s1[i]);
		i++;
	}
	if (s1[i] == '\0' && c == '\0')
		return (&s1[i]);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char    *s = "Coucou, ça va ?";
	int    c = '\0';
	printf("mine : %s || ", ft_strchr(s, c));
	printf("reel : %s", strchr(s, c));
	return (0);
}*/
