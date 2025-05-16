int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += ('a' - 'A');
	return(c);
}
/*
#include <stdio.h>
#include <ctype.h>

int main()
{
	char a = 'Z';
	//char b = 'f';

	int	aa = ft_tolower(a);
	int	bb = tolower(a);

	printf("my :      %c, %d, %c\n", a, aa, aa);
	printf("default : %c, %d, %c\n", a, bb, bb);



}*/