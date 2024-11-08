/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:55:55 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/05 12:58:54 by vicperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalnum(int c)
{
	if (!((c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9')))
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
	char	*str = "05 vicperri	...";
	while (str[i])
	{
		if ((ft_isalnum(str[i]) == 1))
			count++;
		i++;
	}
	printf("test 0 pour '%c' : %d\n", str[5], ft_isalnum(str[5]));
	printf("test 1 : %d\n", count);
	return 0;
}*/
