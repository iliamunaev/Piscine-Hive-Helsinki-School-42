/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:03:05 by imunaev-          #+#    #+#             */
/*   Updated: 2024/08/14 10:05:05 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	define_sign(const char *str)
{
	int	count;

	count = 0;
	while (*str == ' ' || *str == '\n' || *str == '\f'
		|| *str == '\r' || *str == '\t' || *str == '\v')
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			count++;
		}
		str++;
	}
	if (count % 2 != 0)
	{
		return (-1);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;

	num = 0;
	sign = define_sign(str);
	while (*str == ' ' || *str == '-' || *str == '+'
		|| *str == '\n' || *str == '\f' || *str == '\r'
		|| *str == '\t' || *str == '\v')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + *str - '0';
		str++;
	}
	return (num * sign);
}
