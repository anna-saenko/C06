/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaenko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:35:52 by asaenko           #+#    #+#             */
/*   Updated: 2023/12/07 12:59:54 by asaenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	find_argv_size(char *argv[])
{
	int	i;

	i = 0;
	while(argv[i])
	{
		i++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return s1[i] - s2[i];
}

void	ft_print_params(char *argv[])
{
	int		i;
	int		j;
	char	*param;

	i = 1;
	while (argv[i])
	{
		j = 0;
		param = argv[i];
		while (param[j])
		{
			write(1, &param[j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_sort_params(char *argv[])
{
	int	i;
	int	j;
	int	argv_size;
	char *temp;

	i = 1;
	argv_size = find_argv_size(argv);
	while (i < argv_size - 1)
	{
		j = i + 1;
		while (j < argv_size)
		{
			if(ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
	ft_print_params(argv);
}
/*
int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		return (0);
	}
	ft_sort_params(argv);
}*/
