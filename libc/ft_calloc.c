/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:58:59 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/07 09:55:43 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	bytes;

	bytes = nmemb * size;
	res = malloc(nmemb * size);
	if (!(nmemb || size))
		return (0);
	if (!(res))
		return (0);
	ft_bzero(res, bytes);
	return (res);
}
/*
int	main(void)
{
	int n = 5;
	int *array;

	// use calloc function to allocate the memory
	array = (int *)ft_calloc(n, sizeof(int));

	// Display the array value
	printf("Array elements after calloc: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	// free the allocated memory
	free(array);
	return (0);
}*/