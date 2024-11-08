/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:10:59 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/07 14:45:55 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
int	ft_compare(const char *haystack, int i, const char *needle)
{
	int	j;

	j = 0;
	while (needle[j])
	{
		if (haystack[i] != needle[j])
			return (1);
		else
			j++;
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	size;
	size_t	i;
	size_t	j;

	size = ft_strlen(s1) - ft_strlen(set);
	str = (char *)malloc(size * sizeof(char));
	i = 0;
	j = 0;
	if (!(str))
		return (0);
	while (s1[i])
	{
		if (s1[i] == set[0])
		{
			if (ft_compare(s1, i, set) == 0)
				i += ft_strlen(set);
		}
		str[j++] = s1[i++];
	}
	return (str);
}
/*
int	main(void)
{
	char const	s1[] = "Brian is in the kitchen";
	char const	set[] = "is in";
	char		*res;

	res = ft_strtrim(s1, set);
	printf("%s\n", res);
	return (0);
}*/
