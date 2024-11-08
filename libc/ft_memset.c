/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:58:59 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/06 16:27:16 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	while (n--)
		*s1++ = c;
	return (s1);
}
/*
int	main(void)
{
	char str[35] = "Vicperri is in the fire coalition.";
	char str1[35] = "Vicperri is in the fire coalition.";
	printf("\nBefore ft_memset(): %s\n", str);

	ft_memset(str + 11, '.', 4 * sizeof(char));
	memset(str1 + 11, '.', 4 * sizeof(char));

	printf("After ft_memset():  %s\n", str);
	printf("After reel memset():  %s", str1);
	return (0);
}*/