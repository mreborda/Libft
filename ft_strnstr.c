/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreborda <mreborda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:21:40 by mreborda          #+#    #+#             */
/*   Updated: 2022/10/31 14:28:30 by mreborda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	a;
	size_t	i;

	a = 0;
	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0')
	{
		while (i + a < n && big[i + a] == little[a])
		{
			if (big[a + i] == '\0' && little[a] == '\0')
				return ((char *)&big[i]);
			a++;
		}
		if (little[a] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (0);
}
