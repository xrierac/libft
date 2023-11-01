/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:54:31 by xriera-c          #+#    #+#             */
/*   Updated: 2023/10/31 16:43:57 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if ((!*haystack || !*needle) && len == 0)
		return ((char *)haystack);
	while (len > 0 && *haystack)
	{
		if (ft_strncmp(haystack, needle, needle_len)
				return ((char *)haystack);
		len++;
		haystack++;
	}
	return (0);
}
