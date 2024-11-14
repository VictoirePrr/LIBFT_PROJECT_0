/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:58:59 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/13 11:06:52 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_compare(const char *big, size_t i, const char *little, size_t len)
{
	size_t	j;

	j = 0;
	while (little[j])
	{
		if (big[i] != little[j] || i >= len)
			return (1);
		else
			j++;
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*big1;

	big1 = (char *)big;
	i = 0;
	if (ft_strlen(little) == 0)
		return (big1);
	if (ft_strlen(little) > len)
		return (0);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			if (ft_compare(big, i, little, len) == 0)
				return (&big1[i]);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	big[] = "aaxx";
// 	char	little[] = "xx";
// 	int		len;
// 	char	*res;
// 	char	*res1;

// 	len = 3;
// 	res = ft_strnstr(big, little, len);
// 	// res1 = strnstr(big, little, len);
// 	printf("mine : %s, ", res);
// 	// printf("reel : %s", res1);
// 	return (0);
// }
