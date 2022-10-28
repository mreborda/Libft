/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreborda <mreborda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:55:47 by mreborda          #+#    #+#             */
/*   Updated: 2022/10/28 16:47:16 by mreborda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = dest;
	if (dest > src)
	{	
		while (0 < n)
		{
			d[n] = s[n];
			n--;
		}
	}
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	return (dest);
}
