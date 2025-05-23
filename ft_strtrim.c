/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:51:39 by kalhanaw          #+#    #+#             */
/*   Updated: 2025/05/20 15:54:14 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	isin(char a, char *b)
{
	while (*b)
	{
		if (*b == a)
			return (1);
		b++;
	}
	return (0);
}

static int	len_trimmed(char const *s1, char const *set)
{
	int	len;

	len = 0;
	while (*s1)
	{
		if (!isin(*s1, (char *) set))
			len++;
		s1++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*record;
	char	*p;

	if (*s1 == '\0')
		return ((char *)s1);
	len = len_trimmed(s1, set);
	p = malloc ((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	record = p;
	while (*s1)
	{
		if (!isin(*s1, (char *) set))
			*p++ = *s1;
		s1++;
	}
	*p = '\0';
	return (record);
}
/* 
#include <stdio.h>

int main()
{
	char s1[] = "Hgelzloa gUgfzok!";
	char s2[] = "zgak";

	printf("%s\n", ft_strtrim(s1, s2));
	printf("\n\n\n****");

	return (0);
} */
