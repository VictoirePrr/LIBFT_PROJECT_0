/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:20:36 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/13 09:19:41 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*s1;
	unsigned char	c1;
	int				i;

	s1 = (char *)s;
	c1 = (unsigned char)c;
	i = 0;
	while (s1[i])
	{
		if (s1[i] == c1)
			return (&s1[i]);
		i++;
	}
	if (s1[i] == '\0' && c1 == '\0')
		return (&s1[i]);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s;
// 	int		c;

// 	s = "Coucou, ça va ?";
// 	c = '\0';
// 	printf("mine : %s || ", ft_strchr(s, c));
// 	printf("reel : %s", strchr(s, c));
// 	return (0);
// }
