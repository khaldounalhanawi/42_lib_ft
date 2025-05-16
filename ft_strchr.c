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