#include <unistd.h>

void	ft_print_program_name(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (!argc)
	{
		return (0);
	}
	ft_print_program_name(argv[0]);
}