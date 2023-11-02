/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xriera-c <xriera-c@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:10:16 by xriera-c          #+#    #+#             */
/*   Updated: 2023/11/02 15:20:11 by xriera-c         ###   ########.fr       */
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
	char	**arr;
	size_t	start;
	size_t	i;
	size_t	j;

	arr = malloc(sizeof(char) * (get_number_words(s, c) + 1));
	if (!arr)
		return (0);
	start = 0;
	j = 0;
	while (s[start])
	{
		if (s[start] == c)
			start++;
		else
		{
			i = 0;
			while (s[start + i] != c && s[start + i])
				i++;
			arr[j] = ft_substr(s, start, i);
			j++;
			start = start + i;
		}
	}
	arr[j] = 0;
	return (arr);
}
