/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:33:06 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/12 13:26:53 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_overflow(const char *nptr, int i, int neg, unsigned long res)
{
	if (res * 10 > 9223372036854775807)
	{
		if (neg > 0)
			return (-1);
		else
			return (0);
	}
	if (res * 10 + (nptr[i] - 48) > 9223372036854775807)
		return (-1);
	return (1);
}

int	ft_atoi(const char *nptr)
{
	unsigned long	res;
	int				neg;
	int				i;

	i = 0;
	neg = 1;
	res = 0;
	while ((nptr[i] == ' ') || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			neg *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (ft_overflow(nptr, i, neg, res) == -1)
			return (-1);
		if (ft_overflow(nptr, i, neg, res) == 0)
			return (0);
		else
			res = res * 10 + (nptr[i++] - 48);
	}
	return ((int)res * neg);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*nptr;

	nptr = "2147483649999999999999999999999999999998";
	printf("mine : %d || ", ft_atoi(nptr));
	printf("reel : %d", atoi(nptr));
	return (0);
}
*/
