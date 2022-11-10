/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreborda <mreborda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:08:38 by mreborda          #+#    #+#             */
/*   Updated: 2022/11/09 11:15:46 by mreborda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd ("-2147483648", fd);
	else
	{
		if (n > 9)
			ft_putnbr_fd (n / 10, fd);
		if (n < 0)
		{	
			n = n * -1;
			ft_putchar_fd ('-', fd);
			if (n > 9)
				ft_putnbr_fd (n / 10, fd);
		}
		ft_putchar_fd ((n % 10) + 48, fd);
	}
}
