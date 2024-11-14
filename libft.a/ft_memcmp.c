/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:20:39 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/13 10:17:02 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s01;
	unsigned char	*s02;

	i = 0;
	s01 = (unsigned char *)s1;
	s02 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (s01[i] == s02[i] && i < n - 1)
		i++;
	return (s01[i] - s02[i]);
}

// int	main(void)
// {
// 	char	s1[12] = "zyxbcdefgh";
// 	char	s2[12] = "abcdefgxyz";
// 	size_t	n;

// 	n = 0;
// 	printf("reel : %d, ", memcmp(s1, s2, n));
// 	printf("mine : %d", ft_memcmp(s1, s2, n));
// 	return (0);
// }
