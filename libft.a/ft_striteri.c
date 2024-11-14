/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:10:59 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/13 12:43:30 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	function_test(unsigned int i, char *s)
// {
// 	if (i % 2 == 0 && s[i] >= 'a' && s[i] <= 'z')
// 		s[i] -= 32;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *s))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main(void)
// {
// 	char s[] = "dimanche, je joue aux sims.";

// 	ft_striteri(s, function_test);
// 	printf("%s", s);
// 	return (0);
// }