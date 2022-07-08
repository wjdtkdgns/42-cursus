/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghjeo <sanghjeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:03:15 by sanghjeo          #+#    #+#             */
/*   Updated: 2022/07/07 13:03:15 by sanghjeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	size_t	strlen;

	if (!s)
		return (0);
	strlen = ft_strlen(s);
	if (strlen < start)
		return ft_strdup("");
	if (strlen < len)
		len = strlen;
	temp = (void *)malloc(len + 1);
	if (!temp)
		return (0);
	ft_memcpy(temp, s + start, len);
	temp[len] = 0;
	return (temp);
}