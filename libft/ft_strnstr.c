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
	size_t	idx;
	size_t	idx2;

	if (*needle == '\0')
		return ((char *)haystack);
	idx = 0;
	while (haystack[idx] && idx < len)
	{
		idx2 = 0;
		while (haystack[idx + idx2] && needle[idx2] && haystack[idx + idx2] == needle[idx2] && idx + idx2 < len)
		{
			idx2++;
			if (needle[idx2] == 0)
				return ((char *)haystack + idx);
		}
		idx++;
	}
	return (0);
}