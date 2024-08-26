/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:01:50 by imunaev-          #+#    #+#             */
/*   Updated: 2024/08/15 17:26:02 by imunaev-         ###   ########.fr       */
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

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	main(int ac, char **av)
{	
	int	i;
	int	j;

	if (ac > 1)
	{
		j = 1;
		while (j < ac - 1)
		{
			i = 1;
			while (i < ac - 1)
			{
				if (ft_strcmp(av[i], av[i + 1]) > 0)
				{
					ft_swap(&av[i], &av[i + 1]);
				}
				i++;
			}
			j++;
		}
		i = 1;
		while (i < ac)
			ft_putstr(av[i++]);
	}
	return (0);
}
