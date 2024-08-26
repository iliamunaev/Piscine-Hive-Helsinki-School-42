/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:26:21 by imunaev-          #+#    #+#             */
/*   Updated: 2024/08/19 11:25:25 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc((max - min) * sizeof(int));
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
		arr[i++] = min++;
	*range = arr;
	return (i);
}
