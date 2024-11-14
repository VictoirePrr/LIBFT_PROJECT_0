/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:52:14 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/12 13:23:02 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	else
		return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	char	*str = "viC0PEr5ri	";
	while (str[i])
	{
		if ((ft_isdigit(str[i]) == 1))
			count++;
		i++;
	}
	printf("test 0 pour '%c' : %d\n", str[1], ft_isdigit(str[1]));
	printf("test 1 : %d\n", count);
	return 0;
}*/
