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
#include "libft.h"

static int	str_len(char *s)
{
	int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

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

static char	*sliders(char const *s1, char const *set)
{
	int		last;
	char	*new;

	while (isin(*s1, (char *)set))
		s1++;
	last = str_len ((char *) s1) - 1;
	if (last < 0)
	{
		new = malloc ((str_len ((char *) s1) + 1) * sizeof (char));
		if (!new)
			return (NULL);
		ft_strlcpy (new, s1, (str_len ((char *) s1)));
		return (new);
	}
	while (isin(s1[last], (char *) set))
		last --;
	new = malloc ((last + 2) * sizeof(char));
	if (!new)
		return (NULL);
	ft_strlcpy (new, s1, last + 2);
	return (new);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;

	if (!s1)
		return (NULL);
	if (*s1 == '\0')
	{
		new = malloc (1);
		if (!new)
			return (NULL);
		*new = '\0';
		return (new);
	}
	if (!set)
	{
		new = ft_strdup (s1);
		return (new);
	}
	new = sliders(s1, set);
	return (new);
}
/*
#include <stdio.h>

int main()
{
	//char s1[] = "Hgelzloa gUgfzok!";
	//char s2[] = "zgak";
	          // 012345678 9 
	//char s1[] = " . abcd";
	//char s2[] = "";
	
	char s1[] = "aacacabaaacccb";
	char s2[] = "abc";

	//char s1[] = "  \t \t \n   \n\n\n\t";
	//char s2[] = " \n\t";
	// ft_strtrim(s1, s2);
	printf(">%s<\n", ft_strtrim(s1, s2));

	return (0);
}*/
