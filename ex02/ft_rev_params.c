/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaenko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:21:49 by asaenko           #+#    #+#             */
/*   Updated: 2023/12/07 09:22:38 by asaenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*param;

	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		param = argv[i];
		while (param[j])
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
		ft_rev_params(argc, argv);
	}
}