/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:10:59 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/08 14:46:07 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	function_test(unsigned int i, char *s)
{
	char	c;

	c = s[i];
	if (s[i] % 2 == 0 && s[i] >= 'a' && s[i] <= 'z')
		c -= 32;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, s);
		i++;
	}
}
/*
int	main(void)
{
	char *s = "dimanche, je joue aux sims.";

	ft_striteri(s, function_test);
	printf("%s", s);
	return (0);
}*/