#include <stdlib.h>

char **ft_split(char const *s, char c)
{
	int		len;
	int		freq;
	int		local_len;
	char **p;
	char **origin;
	
	len = 0;
	freq = 0;
	while (s[len])
	{
		if (s[len] == c)
			freq++;
		len++;
	}
	if (!freq)
		return (NULL);
	freq += 2;	
	p = malloc ((freq) * sizeof (char *));
	origin = p;
	while (--freq)
	{
		// get size
		local_len = get_next(s, c);
		// malloc it
		*p = malloc ((local_len + 1) * sizeof(char));
		//strcpy
		ft_strlcpy(*p, src, local_len); 
		//*p = "a";
		s += local_len + 1;
		p++;
	}
	*p = NULL;
	

    return (origin);

}

#include <stdio.h>

int main ()
{
    char s[] = "hey there, how are you?";
    char c = ' ';

    char **k = ft_split(s, c);

    int i = 6;
    while (i--)
    {
        
        printf("%s",*(k));
        k = k + 1;

    }

    return (0);


}
