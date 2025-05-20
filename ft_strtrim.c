#include <stdio.h>
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
	record = (char *)s1;
	while (*s1)
	{
		if (!isin(*s1,(char *)set))
			len++;
		s1++;
	}
	s1 = record;
	p = malloc ((len + 1) * sizeof(char));
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

#include <stdio.h>

int main()
{
	char s1[] = "kz2Hkelklkzo jmjokfzo!";
	char s2[] = "jzk";

	printf("%s\n", ft_strtrim(s1, s2));



	return (0);
}