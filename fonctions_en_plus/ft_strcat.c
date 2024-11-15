/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:54:24 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/05 14:37:12 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(s1);
	while (s2[i])
	{
		s1[size + i] = s2[i];
		i++;
	}
	s1[size + i] = '\0';
	return (s1);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s2[9] = "ça va ?";
	char s1[9] = "Coucou, ";
	printf("%s", ft_strcat(s1, s2));
	return (0);
}*/
