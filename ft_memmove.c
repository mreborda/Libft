/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreborda <mreborda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:55:47 by mreborda          #+#    #+#             */
/*   Updated: 2022/11/15 16:44:37 by mreborda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	i = n + 1;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (!s && !d)
		return (dest);
	if (d > s)
	{	
		while (--i > 0)
			d[i - 1] = s[i - 1];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
