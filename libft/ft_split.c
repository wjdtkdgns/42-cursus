/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghjeo <sanghjeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:03:15 by sanghjeo          #+#    #+#             */
/*   Updated: 2022/07/07 13:03:15 by sanghjeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	word_cnt(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**freeel(char **temp, size_t idx)
{
	while (idx--)
	{
		free(temp[idx]);
		temp[idx] = 0;	
	}
	free(temp);
	temp = 0;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**temp;
	char	*str_start;
	size_t	idx;

	if(!s)
		return (0);
	if (!(temp = (char **)malloc(sizeof(char *) * (word_cnt(s, c) + 1))))
		return (0);
	idx = 0;
	while (*s)
	{
		if (*s != c)
		{
			str_start = (char *)s;
			while (*s && *s != c)
				s++;
			if(!(temp[idx] = (char *)malloc(s - str_start + 1)))
				return (freeel(temp, idx));
			ft_strlcpy(temp[idx], str_start, s - str_start + 1);
			idx++;
		}
		else
			s++;
	}
	temp[idx] = 0;
	return (temp);
}
