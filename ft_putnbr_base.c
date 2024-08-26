/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 14:48:32 by imunaev-          #+#    #+#             */
/*   Updated: 2024/08/14 10:51:57 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	validate_less_2(char *base)
{
	if (ft_strlen(base) < 2)
		return (1);
	return (0);
}

int	ft_is_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (validate_less_2(base))
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	num;
	int		baselen;

	num = nbr;
	baselen = ft_strlen(base);
	if (!ft_is_valid_base(base))
		return ;
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num >= baselen)
	{
		ft_putnbr_base(num / baselen, base);
		ft_putnbr_base(num % baselen, base);
	}
	else
		ft_putchar(base[num]);
}
