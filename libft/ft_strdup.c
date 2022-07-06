/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghjeo <sanghjeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:03:15 by sanghjeo          #+#    #+#             */
/*   Updated: 2022/07/07 13:03:15 by sanghjeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strdup(const char *s1)
{
	int		src_len;
	char	*temp;
	int		idx;

	src_len = ft_strlen(s1);
	temp = (char *)malloc(src_len + 1);
	if (!temp)
		return (0);
	idx = 0;
	while (idx < src_len)
	{
		temp[idx] = s1[idx];
		idx++;
	}
	temp[idx] = 0;
	return (temp);
}