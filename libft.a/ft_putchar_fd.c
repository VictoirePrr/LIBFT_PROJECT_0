/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:52:38 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/12 13:23:02 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int fd;
	char c = 'c';

	fd = open("text.txt", O_WRONLY);
	if (!(fd))
		return (1);
	ft_putchar_fd(c, fd);
	close(fd);
	return (0);
}*/