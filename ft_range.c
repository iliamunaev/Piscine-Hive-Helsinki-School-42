/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imunaev- <imunaev-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 10:12:11 by imunaev-          #+#    #+#             */
/*   Updated: 2024/08/16 12:38:12 by imunaev-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	len;
	int	i;

	len = max - min;
	i = 0;
	if (min >= max)
	{
		arr = NULL;
		return (NULL);
	}
	arr = (int *) malloc(len * sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
