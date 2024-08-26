/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 09:57:50 by imunaev-          #+#    #+#             */
/*   Updated: 2024/08/15 10:00:27 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		while (ac > 1)
		{
			ft_putstr(av[--ac]);
		}
	}
	return (0);
}
