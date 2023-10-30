/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:50:42 by xriera-c          #+#    #+#             */
/*   Updated: 2023/10/30 16:42:57 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	size_t			lendest;
	size_t			lensrc;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	lendest = i;
	while (src[j])
		j++;
	lensrc = j;
	j = 0;
	if (dstsize == 0 || lendest >= dstsize)
		return (dstsize + lensrc);
	while (src[j] && j < (dstsize - lendest - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (lendest + lensrc);
}
