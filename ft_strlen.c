#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int 	main()
{

	char k[] = "";
	printf("my%zu\n", ft_strlen(k));
	printf("default%zu\n", strlen(k));
	return (0);
}
*/
