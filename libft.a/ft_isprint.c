/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:11:49 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/12 13:23:02 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	else
		return (1);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	char	*str = "i # $ & ' ( ) * + , - .  r A s t u v w x y z { | } ~ ";
	while (str[i])
	{
		if ((isprint(str[i]) == 1))
			count++;
		i++;
	}
	printf("test 0 : %d\n", ft_isprint(str[1]));
	printf("test 1 : %d\n", isprint(str[1]));
	printf("test 2 : %d\n", count);
	return 0;
}*/
