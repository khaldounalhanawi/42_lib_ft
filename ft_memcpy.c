#include <stddef.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *p;
	const unsigned char *j;


	p = (unsigned char *)dst;
	j = (const unsigned char *)src;
	while (n)
	{
		*p++ = *j;
		j++;
		n--;
	}
	return (dst);
}
/*

#include <stdio.h>
#include <string.h> 

int	main()
{
 	char src[] = "khaldoun";
 	char dst[] = "xyz";

 	char srcD[] = "khaldoun";
 	char dstD[] = "xyz";

 	int num = 1;

 	ft_memcpy(dst, src, num);
 	memcpy(dstD, srcD, num);

 	printf("my:      %s\n", dst);
 	printf("default: %s\n", dstD);

}*/