#include <stdlib.h>

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t num;

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;

	p = malloc((len + 1) * sizeof(unsigned char));
	if (!p)
		return (NULL);
	ft_strlcpy(p, &s[start], len + 1);
	return(p);
}
/*
#include <stdio.h>

int main()
{

	char s[] = "hello world!";
	int pos = 98;
	size_t len = 6;

	printf("%s\n", ft_substr(s,pos,len));
}*/