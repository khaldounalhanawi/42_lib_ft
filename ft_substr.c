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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *p;

	p = ft_strdup(&s[start]);

	return(p);

}

#include <stdio.h>

int main()
{

	char s[] = "khaldoun";
	int pos = 3;
	size_t len = 3;

	printf("%s\n", ft_substr(s,pos,len));





}