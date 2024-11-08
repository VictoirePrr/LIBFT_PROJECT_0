/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:10:59 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/08 10:50:46 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(int n)
{
	size_t	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*c;
	int		i;
	int		size;

	i = 0;
	size = ft_strlen(n);
	if (n < 0)
	{
		c = (char *)malloc(size + 2 * sizeof(char));
		c[0] = '-';
		n *= -1;
	}
	else
		c = (char *)malloc(size + 1 * sizeof(char));
	c[size + 1] = '\0';
	while (n > 9)
	{
		c[size] = n % 10 + '0';
		n /= 10;
		size--;
	}
	if (n < 9)
		c[size] = n + '0';
	return (c);
}
/*
int	main(void)
{
	int		n;
	char	*c;
	int		i;

	n = 0;
	c = ft_itoa(n);
	i = 0;
	printf("%s", c);
	return (0);
}
*/
