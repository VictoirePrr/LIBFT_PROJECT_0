/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:10:59 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/08 09:53:52 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

size_t	ft_reslen(const char *s1, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s1[i])
	{
		if (s1[i] == c || s1[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

size_t	ft_countword(const char *s1, size_t i, char c)
{
	size_t	count;

	count = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			return (count);
		i++;
		count++;
	}
	return (count);
}
char	*ft_strdup(const char *s1, size_t size, char c, size_t i)
{
	char	*dup;
	size_t	j;

	dup = (char *)malloc(size + 1 * sizeof(char));
	j = 0;
	if (!(dup))
		return (0);
	while (s1[i] != c && s1[i])
	{
		dup[j] = s1[i];
		i++;
		j++;
	}
	dup[j] = '\0';
	return (dup);
}
char	**ft_split(char const *s, char c)
{
	char	**res;
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	str = (char *)s;
	res = (char **)malloc(ft_reslen(s, c) * sizeof(char **));
	if (!(res))
		return (0);
	while (str[i])
	{
		res[j] = ft_strdup(str, ft_countword(str, i, c), c, i);
		i += ft_countword(str, i, c) + 1;
		j++;
	}
	return (res);
}
/*
int	main(void)
{
	const char	s[] = "Brian is in the kitchen";
	char		c;
	char		**res;
	int			i;
	int			j;

	c = ' ';
	res = ft_split(s, c);
	i = 0;
	while (i < 5)
	{
		printf("%s", res[i]);
		printf("\n");
		i++;
	}
	free(res);
	return (0);
}*/
