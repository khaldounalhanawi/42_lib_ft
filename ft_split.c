#include <stdlib.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
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

int	get_next(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s != c && *s)
	{
		i++;
		s++;
	}
	return (i);
}

int freq_cal(char const *s, char c)
{
	int	freq;

	freq = 0;
	while (*s)
	{
		if (*s == c)
			freq++;
		s++;
	}
	return (freq);
}

char **ft_split(char const *s, char c)
{
	int		freq;
	int		local_len;
	char **p;
	char **origin;
	
	freq = freq_cal(s, c);
	if (!freq )
		return (NULL);
	freq += 2;
	p = malloc ((freq) * sizeof (char *));
	if (!p)
		return (NULL);
	origin = p;
	while (--freq)
	{
		local_len = get_next(s, c);
		*p = malloc ((local_len + 1) * sizeof(char));
		if (!(*p))
			return (NULL);
		ft_strlcpy(*p, s, local_len + 1); 
		s += local_len + 1;
		p++;
	}
	*p = NULL;
    return (origin);
}

#include <stdio.h>

int main ()
{
    char s[] = "hey there how are you";
    char c = ' ';

    // char s[] = "hey there how are you";
    // char c = 'e';

    // char s[] = "  ";
    // char c = 'e';

    // char s[] = "";
    // char c = 'e';

    // char s[] = "hey there i am";
    // char c = 'f';

    char **k = ft_split(s, c);

    printf("%p\n", k);
    if (k)
	{   
		int i = 0;
	    while (k[i])
	    {
	        printf("%s\n",k[i]);
	        i++;
	    }
	}
    return (0);


}
