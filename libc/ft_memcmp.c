/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:20:39 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/08 17:23:36 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s01;
	unsigned char	*s02;

	i = 0;
	s01 = (unsigned char *)s1;
	s02 = (unsigned char *)s2;
	while (s01[i] == s02[i] && i < n)
		i++;
	return (s01[i] - s02[i]);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[12] = "Hello world";
	char	s2[12] = "Hello WORLD";
	size_t	n;

	n = 12;
	printf("reel : %d, ", memcmp(s1, s2, n));
	printf("mine : %d", ft_memcmp(s1, s2, n));
	return (0);
}
