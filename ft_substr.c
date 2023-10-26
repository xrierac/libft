/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:04:32 by xriera-c          #+#    #+#             */
/*   Updated: 2023/10/26 14:55:41 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substring;

	i = 0;
	substring = (char *)malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (0);
	while ((len - i) > 0)
	{
		substring[i] = s[start + i];
		i++;
	}
	return (substring);
}
