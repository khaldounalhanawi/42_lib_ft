int	str_len(char *s)
{
	int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int				len;
	unsigned int	counter;

	if (!s || !f)
		return;
	len = str_len (s);
	if (len == 0)
		return;
	counter = 0;
	while (counter < len)
	{
		f(counter, &s[counter]);
		counter++;
	}
}
/*
void add(unsigned int n, char *c)
{
	*c = 'f';
}
#include <stdio.h>

int main()
{
	// printf("%d\n", str_len(" "));
	char str[] = "hey wo";
	void (*kk)(unsigned int, char*);

	kk = add;

	ft_striteri(str,kk);
	printf("%s\n", str);

	return (0);
}*/