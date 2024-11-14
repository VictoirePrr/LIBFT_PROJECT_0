/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:58:59 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/13 09:21:24 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*s1;
	unsigned char	c1;
	int				i;

	s1 = (char *)s;
	c1 = (unsigned char)c;
	i = 0;
	while (s1[i])
		i++;
	if (s1[i] == '\0' && c1 == '\0')
		return (&s1[i]);
	while (s1[i] != c1 && i > 0)
		i--;
	if (s1[i] == c1)
		return (&s1[i]);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char    *s = "coucou, ça va?";
	char    c = 'c';
	printf("mine : %s || ", ft_strrchr(s, c));
	printf("reel : %s", strrchr(s, c));
	return (0);
}*/
