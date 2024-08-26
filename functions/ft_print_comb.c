/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 09:15:10 by imunaev-          #+#    #+#             */
/*   Updated: 2024/08/01 16:15:27 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display_nums(int x, int y, int z)
{
	write (1, &x, 1);
	write (1, &y, 1);
	write (1, &z, 1);
	if (x != '7' || y != '8' || z != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	num_1;
	int	num_2;
	int	num_3;

	num_1 = '0';
	while (num_1 <= '7')
	{
		num_2 = num_1 + 1;
		while (num_2 <= '8')
		{
			num_3 = num_2 + 1;
			while (num_3 <= '9')
			{
				display_nums(num_1, num_2, num_3);
				num_3 ++;
			}
			num_2 ++;
		}
		num_1 ++;
	}
}
