#include <unistd.h>
int	ft_find_argv_size(char *argv[])
{
	int	i;

	i = 0;
	while (argv[i])
	{
		i++;
	}
	return (i);
}

void	ft_rev_params(char *argv[])
{
	int		i;
	int		j;
	char	*param;

	i = ft_find_argv_size(argv) - 1;
	while (i > 0)
	{
		j = 0;
		param = argv[i];
		while(param[j])
		{
			write(1, &param[j], 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		return (0);
	}
	else
	{
		ft_rev_params(argv);
	}
}