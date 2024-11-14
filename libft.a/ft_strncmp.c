/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:58:59 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/13 09:04:03 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s01;
	unsigned char	*s02;

	s01 = (unsigned char *)s1;
	s02 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	if (!(s01 || s02))
		return (0);
	while (s01[i] == s02[i] && i < n - 1 && s01[i])
		i++;
	return (s01[i] - s02[i]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "test\200";
// 	char	s2[] = "test\0";

// 	printf("reel : %d, ", strncmp(s1, s2, 6));
// 	printf("mine : %d", ft_strncmp(s1, s2, 6));
// 	return (0);
// }
