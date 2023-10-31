/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:54:31 by xriera-c          #+#    #+#             */
/*   Updated: 2023/10/31 12:17:54 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!needle)
		return ((char *)haystack);
	i = 0;
	while (len < 0)
	{
		while (haystack[i] == needle[i])
			i++;
		if (haystack[i] == '\0')
				return ((char *)haystack);
		len--;
		haystack++;	
	}
	return (0);
}
