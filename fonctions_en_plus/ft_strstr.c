/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:58:59 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/21 15:13:44 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	ft_compare(const char *haystack, int i, const char *needle)
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
		return ((char *)haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			if (ft_compare(haystack, i, needle) == 0)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char haystack[] = "phrase est une phrase";
// 	char needle[] = "phrase";
// 	char *res;
// 	char *res1 = NULL;

// 	res = ft_strstr(haystack, needle);
// 	printf("mine %s, reel : %s", res, res1);
// 	return (0);
// }