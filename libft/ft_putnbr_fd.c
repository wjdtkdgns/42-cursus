/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghjeo <sanghjeo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:03:15 by sanghjeo          #+#    #+#             */
/*   Updated: 2022/07/07 13:03:15 by sanghjeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	lastnum;

	if (n < 0)
	{
		write (fd, "-", 1);
		lastnum = -(n % 10) + '0';
		if (-(n / 10) > 0)
			ft_putnbr_fd (-(n / 10), fd);
	}
	else if (n / 10 > 0)
	{
		lastnum = n % 10 + '0';
		ft_putnbr_fd (n / 10, fd);
	}
	else
		lastnum = n + '0';
	write (fd, &lastnum, 1);
}