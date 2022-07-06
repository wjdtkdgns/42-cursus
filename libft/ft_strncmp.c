/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghjeo <sanghjeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:03:15 by sanghjeo          #+#    #+#             */
/*   Updated: 2022/07/07 13:03:15 by sanghjeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;
	size_t	ans;

	idx = 0;
	ans = 0;
	while ((s1[idx] || s2[idx]) && idx < n)
	{	
		if (s1[idx] != s2[idx])
		{
			ans = s1[idx] - s2[idx];
			return (ans);
		}
		idx++;
	}
	return (ans);
}
