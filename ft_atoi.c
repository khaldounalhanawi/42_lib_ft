int	ft_atoi(const char *str)
{
	long	val;
	int		len;
	int 	multiply;
	int 	sign;

	sign = 1;
	if(*str == '-')
	{
		sign = -1;
		str++;
	}
	len = 0;
	while (str[len] && str[len] >= '0' && str[len] <= '9' 
		|| str[len] == ' ' || str[len] == '+'
		|| (str[len] >= 9 && str[len] <= 13))
		len++;
	multiply = 1;
	val = 0;
	while (len--)
	{
		if (str[len] >= '0' && str[len] <= '9')
		{
			val += (str[len] - '0') * multiply;
			multiply *= 10;
		}
	}
	return ((int)val * sign);
}
/*
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int i = 0;
	// char a[] = "43b3";
	char *a[] = {"-433","","34","b","45b","+43b9","-43b9","é4","  0990","\t005","020b","2147483647","-2147483648"};

	while (i < 13)
	{
		printf("my:        %d\t\t", ft_atoi(a[i]));
		printf("default:   %d\n", atoi(a[i]));
		i++;
	}



}*/