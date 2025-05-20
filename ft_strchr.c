/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:38:59 by kalhanaw          #+#    #+#             */
/*   Updated: 2025/05/20 15:39:00 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	if (c == '\0')
	{
		while (*s != c)
			s++;
		return ((char *)s);
	}
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
/*

#include <stdio.h>
#include <string.h>

int main()
{
	char txt[] = "khaldoun";
	// char txt[] = {'k', 'h','a', '\0', 'a'};
	char c = 'f';

	printf("my :      %s\n", ft_strchr(txt,c));
	printf("default : %s\n", strchr(txt,c));



}*/
