
#include <stddef.h>

int full_match(const char *haystack, const char *needle)
{
	while (*needle)
	{
		if (*needle != *haystack || !*haystack)
			return (0);
		needle++;
		haystack++;
	}
	return (1);
}

char *ft_strstr(const char *haystack, const char *needle)
{
	if (*needle == '\0')
		return((char *)haystack);
	while (*haystack)
	{
		if (*haystack == *needle && full_match(haystack, needle))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char a[] = "ld";
	char b[] = "ldo";

	printf("my:         %s\n", ft_strstr(a, b));
	printf("default:    %s\n", strstr(a, b));


}*/