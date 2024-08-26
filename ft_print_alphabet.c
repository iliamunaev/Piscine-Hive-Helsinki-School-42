/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:12:18 by imunaev-          #+#    #+#             */
/*   Updated: 2024/07/31 20:11:27 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	ascii_char;

	ascii_char = 97;
	while (ascii_char <= 122)
	{
		write(1, &ascii_char, 1);
		ascii_char ++;
	}
}
