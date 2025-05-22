#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

void ft_putendl_fd(char *s, int fd)
{
	char	*start;

	if (!s)
		return;
	start = s;
	while (*s)
	{
		ft_putchar_fd (*s, fd);
		s++;
	}
	ft_putchar_fd ('\n', fd);
}
/*
int main()
{

	char str[] = "asd";

	ft_putendl_fd(str,1);
}*/