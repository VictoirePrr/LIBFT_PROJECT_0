/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:58:59 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/06 15:18:29 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest1;
	unsigned char	*src1;
	size_t			i;

	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	i = 0;
	if (!(dest1 && src1))
		return (0);
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest1);
}
/*
int	main(void)
{
	char first_str[100] = "Coucou";
	char sec_str[100] = "vicperri";

	char one_str[] = "Coucou";
	char two_str[] = "vicperri";

	char *res = ft_memcpy(first_str, sec_str, 9);
	char *res1 = memcpy(one_str, two_str, 9);

	printf("\nft_memcpy = %s", res);
	printf("\nmemcpy = %s", res1);

	return (0);
}*/