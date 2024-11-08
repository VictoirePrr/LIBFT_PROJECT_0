/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:58:59 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/05 14:24:00 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	i = 0;
	if (ft_strlen(needle) == 0)
		return (ft_strcpy(haystack));
	if (ft_strlen(needle) > len)
		return (0);
	while (haystack[i] && i < len)
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
/*
#include <stdio.h>

int	main(void)
{
  char haystack[22] = "ceci est une phrase";
   char needle[7] = "rase";
   int len = 19;
  char *res = ft_strnstr(haystack, needle, len);
   char *res1 = strnstr(haystack, needle, len);
   printf("mine : %s, ", res);
   printf("reel : %s", res1);
   return (0);
}*/
