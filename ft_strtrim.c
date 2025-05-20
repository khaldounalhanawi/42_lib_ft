#include <stdlib.h>

int	isin(char a, char *b)
{
	while (*b)
	{
		if (*b == a)
			return (1);
		b++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	int len;
	char	*record;
	char	*p;

	len = 0;
	if (*s1 == '\0')
		return ((char *)s1);
	record = (char *)s1;
	while (*s1)
	{
		if (!isin(*s1,(char *)set))
			len++;
		s1++;
	}
	s1 = record;
	p = malloc ((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	record = p;
	while (*s1)
	{
		if (!isin(*s1,(char *)set))
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