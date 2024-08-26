/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:13:15 by imunaev-          #+#    #+#             */
/*   Updated: 2024/08/14 12:50:00 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
