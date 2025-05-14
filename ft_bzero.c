#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char *p;

	if (n == 0)
		return;
	p = (unsigned char *)s;
	while (n)
	{
		*p++ = 0;
		n--;
	}
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{	
	char a[] = "khal";
	char b[] = "khal";

	ft_bzero(a, 2);
	bzero(b, 2);

	printf("mine:    %s\n", a);
	printf("default: %s\n", b);
	return (0);

}
*/