/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicperri <vicperri@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:25:55 by vicperri          #+#    #+#             */
/*   Updated: 2024/11/15 12:55:22 by vicperri         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

// toupper

#include <stdio.h>

int	main(void)
{
	char	*c;
	int		i;

	c = "cOUCOU mOI C'eST VICPERRI !";
	i = 0;
	while (c[i])
	{
		printf("%c", ft_toupper(c[i]));
		i++;
	}
	return (0);
}

// int	ft_tolower(int c)

#include <stdio.h>

int	main(void)
{
	char	*c;
	int		i;

	c = "cOUCOU mOI C'eST VICPERRI !";
	i = 0;
	while (c[i])
	{
		printf("%c", ft_tolower(c[i]));
		i++;
	}
	return (0);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
int	main(void)
{
	char const	s[] = "Lorem ipsum dolor sit amet";
	char		*res;

	res = ft_substr(s, 0, 10);
	printf("resultat : %s||\n", res);
	return (0);
}
// char	*ft_strtrim(const char *s1, const char *set)
int	main(void)
{
	char const	s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
	char const	set[] = " ";
	char		*res;

	res = ft_strtrim(s1, set);
	printf("||%s||\n", res);
	return (0);
}
// char	*ft_strstr(const char *haystack, const char *needle)

#include <stdio.h>

int	main(void)
{
	char	haystack[] = "phrase est une phrase";
	char	needle[] = "phrase";
	char	*res;
	char	*res1;

	res = ft_strstr(haystack, needle);
	res1 = strstr(haystack, needle);
	printf("mine %s, reel : %s", res, res1);
	return (0);
}

// char	*ft_strrchr(const char *s, int c)

#include <stdio.h>

int	main(void)
{
	char	*s;
	char	c;

	s = "coucou, ça va?";
	c = 'c';
	printf("mine : %s || ", ft_strrchr(s, c));
	printf("reel : %s", strrchr(s, c));
	return (0);
}

// char	*ft_strnstr(const char *big, const char *little, size_t len)
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	big[] = "aaxx";
	char	little[] = "xx";
	int		len;
	char	*res;
	char	*res1;

	len = 3;
	res = ft_strnstr(big, little, len);
	// res1 = strnstr(big, little, len);
	printf("mine : %s, ", res);
	// printf("reel : %s", res1);
	return (0);
}
// char	*ft_strncpy(char *dest, const char *src, size_t n)
#include <stdio.h>

int	main(void)
{
	size_t		n;
	const char	src[6] = "Coucou";
	char		dest[n];

	n = 6;
	printf("%s\n", strncpy(dest, src, n));
	printf("%s", ft_strncpy(dest, src, n));
	return (0);
}
// int	ft_strncmp(const char *s1, const char *s2, size_t n)
#include <stdio.h>

int	main(void)
{
	char	s1[] = "test\200";
	char	s2[] = "test\0";

	printf("reel : %d, ", strncmp(s1, s2, 6));
	printf("mine : %d", ft_strncmp(s1, s2, 6));
	return (0);
}

// char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
char	function_test(unsigned int i, char s)
{
	if (i % 2 == 0 && s >= 'a' && s <= 'z')
		s -= 32;
	return (s);
}

int	main(void)
{
	char		*res;
	char const	*s;

	s = "dimanche, je joue aux sims.";
	res = ft_strmapi(s, &function_test);
	printf("%s\n", res);
	return (0);
}
// size_t	ft_strlen(const char *str)

#include <stdio.h>

int	main(void)
{
	printf("%lu", ft_strlen("HELLO WORLD"));
	printf("%lu", strlen("HELLO WORLD"));
	return (0);
}

// size_t	strlcpy(char *dst, const char *src, size_t size)

int	main(void)
{
	unsigned int	size;
	char			dest[size];
	char			*src;

	size = 5;
	src = "Coucou 42!!!!!!";
	printf("%d", ft_strlcpy(dest, src, size));
	return (0);
}
// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
#include <stdio.h>

int	main(void)
{
	char	src[9] = "ça va ?";
	char	dst[9] = "Coucou, ";
	size_t	n;

	n = 9;
	printf("%zu", ft_strlcat(dst, src, n));
	return (0);
}
// char	*ft_strjoin(char const *s1, char const *s2)
int	main(void)
{
	char const	s1[] = "Brian ";
	char const	s2[] = "is in the kitchen";
	char		*res;

	res = ft_strjoin(s1, s2);
	printf("%s\n", res);
	return (0);
}

// void	ft_striteri(char *s, void (*f)(unsigned int, char *s))
void	function_test(unsigned int i, char *s)
{
	if (i % 2 == 0 && s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;
}
int	main(void)
{
	char	s[] = "dimanche, je joue aux sims.";

	ft_striteri(s, function_test);
	printf("%s", s);
	return (0);
}

// char	*ft_strdup(const char *s1)
int	main(void)
{
	const char	str[21] = "My name is vicperri.";
	char		*dup;

	dup = ft_strdup(str);
	printf("%s", dup);
	free(dup);
	return (0);
}
// int	ft_strcmp(const char *s1, const char *s2)
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "Hello world";
	char	s2[] = "Hello WORLD";

	printf("reel : %d, ", strcmp(s1, s2));
	printf("mine : %d", ft_strcmp(s1, s2));
	return (0);
}

// char	*ft_strchr(const char *s, int c)
#include <stdio.h>

int	main(void)
{
	char	*s;
	int		c;

	s = "Coucou, ça va ?";
	c = '\0';
	printf("mine : %s || ", ft_strchr(s, c));
	printf("reel : %s", strchr(s, c));
	return (0);
}
// char	**ft_split(char const *s, char c)
#include <stdlib.h>

int	main(void)
{
	char	**res;
	int		i;

	res = ft_split("hello!", ' ');
	i = 0;
	while (res[i])
	{
		printf("%s", res[i]);
		printf("\n");
		i++;
	}
	free(res);
	return (0);
}
// void	ft_putstr_fd(char *s, int fd)

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		fd;
	char	s[] = "coucou";

	fd = open("text.txt", O_WRONLY);
	if (!(fd))
		return (1);
	ft_putendl_fd(s, fd);
	close(fd);
	return (0);
}
// void	ft_putnbr_fd(int n, int fd)

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	fd;
	int	n;

	n = 2147483647;
	fd = open("text.txt", O_WRONLY);
	if (!(fd))
		return (1);
	ft_putnbr_fd(n, fd);
	close(fd);
	return (0);
}

// void	ft_putendl_fd(char *s, int fd)
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		fd;
	char	s[] = "coucou";

	fd = open("text.txt", O_WRONLY);
	if (!(fd))
		return (1);
	ft_putendl_fd(s, fd);
	close(fd);
	return (0);
}

// void	ft_putchar_fd(char c, int fd)
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int		fd;
	char	c;

	c = 'c';
	fd = open("text.txt", O_WRONLY);
	if (!(fd))
		return (1);
	ft_putchar_fd(c, fd);
	close(fd);
	return (0);
}
// void	*ft_memset(void *s, int c, size_t n)
int	main(void)
{
	char	str[35] = "Vicperri is in the fire coalition.";
	char	str1[35] = "Vicperri is in the fire coalition.";

	printf("\nBefore ft_memset(): %s\n", str);
	ft_memset(str + 11, '.', 4 * sizeof(char));
	memset(str1 + 11, '.', 4 * sizeof(char));
	printf("After ft_memset():  %s\n", str);
	printf("After reel memset():  %s", str1);
	return (0);
}
// void	*ft_memmove(void *dst, const void *src, size_t len)
#include <stdio.h>

int	main(void)
{
	char	dest[] = "Coucou les amis";
	char	dest1[] = "Coucou les amis";

	ft_memmove(dest + 2, dest + 11, 16);
	printf("ft_memmove : %s", dest);
	// memmove(dest1 + 2, dest + 11, 16);
	// printf("\nmemmove : %s", dest1);
	return (0);
}

// void	*ft_memcpy(void *dest, const void *src, size_t n)
int	main(void)
{
	char	dest[100];
	char	one_str[100];
	char	*res;
	char	*res1;

	res = ft_memcpy(dest, "coucou", 1);
	res1 = memcpy(one_str, "coucou", 1);
	printf("\nft_memcpy = %s||", res);
	printf("\nmemcpy = %s", res1);
	return (0);
}

// int	ft_memcmp(const void *s1, const void *s2, size_t n)
int	main(void)
{
	char	s1[12] = "zyxbcdefgh";
	char	s2[12] = "abcdefgxyz";
	size_t	n;

	n = 0;
	printf("reel : %d, ", memcmp(s1, s2, n));
	printf("mine : %d", ft_memcmp(s1, s2, n));
	return (0);
}
// void	*ft_memchr(const void *s, int c, size_t n)
#include <stdio.h>

int	main(void)
{
	char	s[] = {0, 1, 2, 3, 4, 5};
	char	*res;
	char	*res1;

	res = ft_memchr(s, 0, 1);
	res1 = memchr(s, 0, 1);
	printf("mine : %s || ", res);
	printf("reel : %s", res1);
	return (0);
}

// char	*ft_itoa(int n)
int	main(void)
{
	int		n;
	char	*c;

	n = 0;
	c = ft_itoa(n);
	printf("%s", c);
	return (0);
}

// int	ft_isprint(int c)

#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	int		i;
	int		count;
	char	*str;

	i = 0;
	count = 0;
	str = "i # $ & ' ( ) * + , - .  r A s t u v w x y z { | } ~ ";
	while (str[i])
	{
		if ((isprint(str[i]) == 1))
			count++;
		i++;
	}
	printf("test 0 : %d\n", ft_isprint(str[1]));
	printf("test 1 : %d\n", isprint(str[1]));
	printf("test 2 : %d\n", count);
	return (0);
}

// int	ft_isdigit(int c)

#include <stdio.h>
int	main(void)
{
	int		i;
	int		count;
	char	*str;

	i = 0;
	count = 0;
	str = "viC0PEr5ri	";
	while (str[i])
	{
		if ((ft_isdigit(str[i]) == 1))
			count++;
		i++;
	}
	printf("test 0 pour '%c' : %d\n", str[1], ft_isdigit(str[1]));
	printf("test 1 : %d\n", count);
	return (0);
}

// int	ft_isascii(int c)

#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int		i;
	int		count;
	int		n;
	char	*str;

	i = 0;
	count = 0;
	n = 10;
	str = "Je suis vicprri !";
	while (str[i])
	{
		if ((ft_isascii(str[i]) == 1))
			count++;
		i++;
	}
	printf("test ft_ascii pour '%c' : %d\n", str[n], ft_isascii(str[n]));
	printf("test ascii pour '%c' : %d\n", str[n], isascii(str[n]));
	printf("total : %d\n", count);
	return (0);
}
// int	ft_isalpha(int c)

#include <stdio.h>

int	main(void)
{
	int		i;
	int		count;
	char	*str;

	i = 0;
	count = 0;
	str = "viC0PEr5ri	";
	while (str[i])
	{
		if ((ft_isalpha(str[i]) == 1))
			count++;
		i++;
	}
	printf("test 0 pour '%c' : %d\n", str[1], ft_isalpha(str[1]));
	printf("test 1 : %d\n", count);
	return (0);
}

// int	ft_isalnum(int c)

#include <stdio.h>

int	main(void)
{
	int		i;
	int		count;
	char	*str;

	i = 0;
	count = 0;
	str = "05 vicperri	...";
	while (str[i])
	{
		if ((ft_isalnum(str[i]) == 1))
			count++;
		i++;
	}
	printf("test 0 pour '%c' : %d\n", str[5], ft_isalnum(str[5]));
	printf("test 1 : %d\n", count);
	return (0);
}
// void	*ft_calloc(size_t nmemb, size_t size)
int	main(void)
{
	int	n;
	int	*array;

	n = 5;
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
}
// int	ft_atoi(const char *nptr)
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*nptr;

	nptr = "2147483649999999999999999999999999999998";
	printf("mine : %d || ", ft_atoi(nptr));
	printf("reel : %d", atoi(nptr));
	return (0);
}
