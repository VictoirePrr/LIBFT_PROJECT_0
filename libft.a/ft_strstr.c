/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:58:59 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/15 12:30:39 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(const char *str)
{
	char	*res;
	int		i;

	i = 0;
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
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

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;

	i = 0;
	if (ft_strlen(needle) == 0)
		return (ft_strcpy(haystack));
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			if (ft_compare(haystack, i, needle) == 0)
				return (ft_strcpy(&haystack[i]));
		}
		i++;
	}
	return (0);
}
