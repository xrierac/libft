/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:10:16 by xriera-c          #+#    #+#             */
/*   Updated: 2023/11/01 14:50:56 by xriera-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	get_number_words(char const *s, char c)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (*s)
	{
		if (*s != c && j == 0)
		{
			i++;
			j++;
		}
		if (*s == c && j != 0)
			j = 0;
		s++;
	}
	return (i);
}
		
char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**arr;
	size_t	end;
	size_t	i;

	while (*s)
	{
		i = 0;
		while (s[i++] != c)
			end = i;
		if (i > 1)
		{
			ft_substr(*s, 0, end);
	}
}
