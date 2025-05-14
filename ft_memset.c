#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{

	unsigned char *p;

	p = (unsigned char *)b;
	while (len)
	{
		*p++ = c;
		len--;
	}
	return (b);
}
/*


#include <stdio.h>
#include <string.h>

int	main()
{	
	char a[] = "khal";
	char b[] = "khal";

	ft_memset(a,'#', 3);
	memset(b, '#', 3);

	printf("mine:    %s\n", a);
	printf("default: %s\n", b);
	return (0);

}
*/
	// unsigned char *p;
	// void *origin;

	// origin = b;
	// while (len)
	// {
	// 	p = (unsigned char *)b;
	// 	*p = c;
	// 	b++;
	// 	len--;
	// }
	// return (origin);