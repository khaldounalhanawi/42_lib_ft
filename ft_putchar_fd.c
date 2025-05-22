#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
#include <stdio.h>

int main ()
{
	char a = 'e';
	int fd = 1;

	ft_putchar_fd(a, fd);
}
*/