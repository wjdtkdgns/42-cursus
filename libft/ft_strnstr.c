/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghjeo <sanghjeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:03:15 by sanghjeo          #+#    #+#             */
/*   Updated: 2022/07/07 13:03:15 by sanghjeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		idx;
	char	*orgin;
	char	*search;

	idx = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[idx] && len--)
	{
		orgin = (char *)&haystack[idx];
		search = (char *)needle;
		while (*orgin == *search && *orgin && *search)
		{
			search++;
			orgin++;
		}
		if (*search == 0)
			return ((char *)&(haystack[idx]));
		idx++;
	}
	return (0);
}