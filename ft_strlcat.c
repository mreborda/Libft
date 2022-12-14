/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreborda <mreborda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:20:49 by mreborda          #+#    #+#             */
/*   Updated: 2022/11/15 16:58:16 by mreborda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	n;
	size_t	d;
	size_t	s;

	i = 0;
	s = ft_strlen(src);
	d = ft_strlen(dest);
	n = d;
	if (size <= d)
		return (size + s);
	while (src[i] != '\0' && size - 1 > d)
		dest[d++] = src[i++];
	dest[d] = '\0';
	return (s + n);
}
