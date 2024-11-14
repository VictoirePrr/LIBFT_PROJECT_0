/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:58:59 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/12 16:03:54 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (!(dst1 && src1))
		return (0);
	if (dst <= src)
	{
		while (len--)
			*dst1++ = *src1++;
	}
	else if (dst > src)
	{
		dst1 += len - 1;
		src1 += len - 1;
		while (len--)
			*dst1-- = *src1--;
	}
	return (dst);
}
/*
#include <stdio.h>

int	main(void)
{
	char dest[] = "Coucou les amis";
	char dest1[] = "Coucou les amis";

	ft_memmove(dest + 2, dest + 11, 16);
	printf("ft_memmove : %s", dest);
	// memmove(dest1 + 2, dest + 11, 16);
	// printf("\nmemmove : %s", dest1);
	return (0);
}*/