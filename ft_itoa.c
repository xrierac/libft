/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 13:01:22 by xriera-c          #+#    #+#             */
/*   Updated: 2023/11/03 13:05:05 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sizeint(int n)
{
	int	i;
	
	if (n <= 0)
		i = 1;
	else
		i = 0;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	unsigned int	i;
	unsigned int	sign;

	str = malloc(sizeof(char) * sizeint(n));
	if (!str)
		return (0);
	if (n < 0)
		sign = - 1;
	else
		sign = 1;
	i = sign * n;
	while (i != 0)
		i++;
	return (&str[0]);
}
