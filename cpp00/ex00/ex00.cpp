#include <iostream>

void	print_upper(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			std::cout << char(str[i] - 'a' + 'A');
		else
			std::cout << char(str[i]);
	}
}

int		main(int ac, char **av)
{
	int	i;

	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 0;
		while (av[++i])
			print_upper(av[i]);
		std::cout << std::endl;
	}
	return (0);
}
