/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:39:16 by xriera-c          #+#    #+#             */
/*   Updated: 2023/10/31 11:53:23 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int	i;

	i = 0;
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return (0);
	while (*s)
	{
		str[i] = (char)s;
		i++;
		s++;
	}
	str[i] = '\0';
	return (str);
}
