/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:04:32 by xriera-c          #+#    #+#             */
/*   Updated: 2023/11/03 14:24:27 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	size_t			size;

	size = ft_strlen(s);
	if (!s || start >= size || len == 0)
		return (ft_strdup(""));
	if (len > size)
		len = size;
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (0);
	ft_memmove(substring, &s[start], len);
	substring[len] = '\0';
	return (substring);
}
