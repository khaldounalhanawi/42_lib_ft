#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*p;
	char	*record;
	int	len;

	len = 0;
	while (s1[len])
		len++;
	p = malloc((len + 1) * (size_t)sizeof(char));
	if (!p)
		return (NULL);
	record = p;
	while (*s1)
		*p++ = *s1++;
	*p = '\0';
	return (record);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char a[] = {'A','\0','k','\0'};
	// char a[] = "Khaldoun";

	char *b = ft_strdup(a);
	char *c = strdup(a);

	printf("my:       %s\n", b);
	printf("default:  %s\n", c);

	free(b);

	return (0);
}
*/