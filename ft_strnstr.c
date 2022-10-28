/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreborda <mreborda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:21:40 by mreborda          #+#    #+#             */
/*   Updated: 2022/10/28 17:28:34 by mreborda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	f;

	f = 0;
	i = 0;
	if (n == 0)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	while (n > i && big[i] != '\0')
	{
		if (big[i] == little[f])
		{
			while (i + f < n && big[i + f] == little[i])
			{
				if (little[i + f] == '\0')
					return ((char *)big + f);
				i++;
			}
		}
		f++;
	}
	return (0);
}
