/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:58:59 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/12 13:52:38 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lend;
	size_t	lens;
	size_t	i;
	size_t	nb;

	i = 0;
	lend = ft_strlen(dst);
	lens = ft_strlen(src);
	nb = lend;
	if (dstsize == 0)
		return (lens + dstsize);
	while (nb < dstsize - 1 && src[i])
	{
		dst[nb] = src[i];
		i++;
		nb++;
	}
	dst[nb] = '\0';
	if (lend > dstsize)
		return (lens + dstsize);
	return (lend + lens);
}
/*
#include <stdio.h>

int	main(void)
{
	char src[9] = "ça va ?";
	char dst[9] = "Coucou, ";
	size_t n = 9;
	printf("%zu", ft_strlcat(dst, src, n));
	return (0);
}*/