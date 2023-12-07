/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaenko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:21:31 by asaenko           #+#    #+#             */
/*   Updated: 2023/12/07 09:21:37 by asaenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		return (0);
	}
	ft_print_params(argv);
}
