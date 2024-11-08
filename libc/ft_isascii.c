/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:08:34 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/05 13:08:43 by vicperri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isascii(int c)
{
	if (!(c >= 0 && c <= 127))
		return (0);
	return (1);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	int		i;
	int		count;
    int     n;

	i = 0;
	count = 0;
    n = 10;
	char	*str = "Je suis vicprri !";
	while (str[i])
	{
		if ((ft_isascii(str[i]) == 1))
			count++;
		i++;
	}
	printf("test ft_ascii pour '%c' : %d\n", str[n], ft_isascii(str[n]));
    printf("test ascii pour '%c' : %d\n", str[n], isascii(str[n]));
	printf("total : %d\n", count);
	return 0;
}*/
