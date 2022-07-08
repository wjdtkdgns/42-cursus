/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghjeo <sanghjeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:03:15 by sanghjeo          #+#    #+#             */
/*   Updated: 2022/07/07 13:03:15 by sanghjeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	intlen(int n){
	int	len;

	if (n == 0)
		return 1;
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return len;
}	

char	*ft_itoa(int n)
{
	int				len;
	char			*temp;
	unsigned int	tempint;

	len = intlen(n);
	temp = (char *)malloc(len + 1);
	if (!temp)
		return (0);
	tempint = n;
	if (n < 0)
	{
		tempint = -n;
		temp[0] = '-';
	}
	temp[len] = 0;
	temp[--len] = tempint % 10 + '0';
	while (tempint /= 10)
		temp[--len] = tempint % 10 + '0';
	return (temp);
}
