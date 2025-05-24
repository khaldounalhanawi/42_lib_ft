/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalhanaw <kalhanaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:56:10 by kalhanaw          #+#    #+#             */
/*   Updated: 2025/05/24 18:20:06 by kalhanaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	num;

	num = 0;
	while (src[num])
		num++;
	if (dstsize)
	{
		while (--dstsize && *src)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (num);
}

void	len_cal(int *s_len, int *s2_len, unsigned int start, 
	char const *s, size_t len)
{
	while (s[*s_len])
		*s_len = *s_len + 1;
	*s2_len = *s_len - start;
	if (len < (size_t)(*s2_len))
		*s2_len = (int) len;
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*empty;
	char	*p;
	int		s_len;
	int		s2_len;

	if (*s == '\0' || len == 0)
	{
		empty = malloc(1);
		if (!empty)
			return (NULL);
		empty[0] = '\0';
		return (empty);
	}
	s_len = 0;
	s2_len = 0;
	len_cal(&s_len, &s2_len, start, s, len);
	if (start >= (unsigned int) s_len)
		return (malloc(1));
	p = malloc((s2_len + 1) * sizeof(unsigned char));
	if (!p)
		return (NULL);
	ft_strlcpy(p, &s[start], s2_len + 1);
	return (p);
}
/*
#include <stdio.h>

int main()
{

	char s[] = "hola";
	int pos = 0;
	size_t len = 1;

	printf("%s\n", ft_substr(s,pos,len));
}
  */