/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:20:13 by xriera-c          #+#    #+#             */
/*   Updated: 2023/10/26 14:55:00 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*substring;
	int		i;
	size_t	total_len;

	i = 0;
	total_len = (ft_strlen(s1) + ft_strlen(s2));
	substring = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!substring)
		return (0);
	while (s1)
	{
		substring[i] = *s1;
		i++;
		s1++;
	}
	while (s2)
	{
		substring[i] = *s2;
		i++;
		s2++;
	}
	substring[i] = '\0';
	return (substring);
}	
