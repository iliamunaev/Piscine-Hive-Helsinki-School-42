/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 08:33:40 by imunaev-          #+#    #+#             */
/*   Updated: 2024/08/02 09:00:58 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int a)
{
	char	negative_sign;
	char	positive_sign;

	negative_sign = 'N';
	positive_sign = 'P';
	if (a < 0)
	{
		write (1, &negative_sign, 1);
	}
	else
	{
		write (1, &positive_sign, 1);
	}
}
