/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:58:59 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/06 16:09:46 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst1;
	unsigned char	*src1;
	size_t			i;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	i = 0;
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
	return (dst1);
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