/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:56:05 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/05 14:17:59 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	char    *c = "cOUCOU mOI C'eST VICPERRI !";
	int i = 0;

	while(c[i])
	{
		printf("%c", ft_toupper(c[i]));
		i++;
	}
	return (0);
}*/