/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreborda <mreborda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:17:51 by mreborda          #+#    #+#             */
/*   Updated: 2022/11/14 10:55:06 by mreborda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count(long int a)
{
	size_t	size;

	size = 0;
	if (a == 0)
		size = 1;
	if (a < 0)
	{
		a = -1 * a;
		size = 1;
	}
	while (a > 0)
	{
		a = a / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int a)
{
	char		*s;
	long int	b;
	int			i;

	b = a;
	i = ft_count(b) - 1;
	s = (char *)ft_calloc(i + 2, sizeof(char));
	if (!s)
		return (NULL);
	if (b == 0)
		s[0] = '0';
	else if (b < 0)
	{
		s[0] = '-';
		b = -1 * b;
	}
	while (b > 0)
	{
		s[i--] = b % 10 + 48;
		b = b / 10;
	}
	return (s);
}
