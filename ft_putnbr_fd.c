#include <unistd.h>

static void ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

static int devider_cal (long m)
{
	int devider;

	devider = 1;
	while (devider <= m/10)
	{
		devider *= 10;
	}
	return (devider);
}

void ft_putnbr_fd(int n, int fd)
{
	char	out;
	int 	devider;
	long 	m;

	m = (long) n;
	if (m < 0)
	{
		ft_putchar_fd('-', fd);
		m = m * (-1);
	}
	devider = devider_cal (m);
	while (m >= 10)
	{
		out = (m / devider) + '0';
		ft_putchar_fd(out, fd);
		m %= devider;
		devider /= 10;
	}
	out = (m % 10) + '0';
	ft_putchar_fd(out, fd);
}
/*
# include <limits.h>
int main()
{

	int a = INT_MIN;
	// int a = 0;
	// int a = 10;
	// int a = INT_MAX;
	// int a = -5;
	// int a = -100;

	ft_putnbr_fd(a, 1);


}*/