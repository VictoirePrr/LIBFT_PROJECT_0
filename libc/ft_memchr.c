/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:41:43 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/05 14:41:50 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c1;
	unsigned char	*s1;
	size_t			i;

	c1 = (unsigned char)c;
	s1 = (unsigned char *)s;
	i = 0;
	while (s1[i] && i < n - 1)
	{
		if (s1[i] == c1)
			return (&s1[i]);
		i++;
	}
	if (s1[i] == '\0' && c1 == '\0')
		return (&s1[i]);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	const void    *s = "Coucou, ça va ?";
	int    c = '?';
	size_t n = 17;

	char *res = ft_memchr(s, c, n);
	char *res1 = memchr(s, c, n);

	printf("mine : %s || ", res);
	printf("reel : %s", res1);
	return (0);
}*/