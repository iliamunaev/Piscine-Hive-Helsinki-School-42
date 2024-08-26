/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 09:25:14 by imunaev-          #+#    #+#             */
/*   Updated: 2024/08/15 09:30:25 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
	write (1, "\n", 1);
	return ;
}

int	main(int ac, char **av)
{
	if (ac >= 1)
		ft_putstr(av[0]);
	return (0);
}
