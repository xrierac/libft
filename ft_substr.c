/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:04:32 by xriera-c          #+#    #+#             */
/*   Updated: 2023/11/01 17:38:18 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substring;

	if (!s || start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	i = 0;
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (0);
	while ((len - i) > 0)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
