/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreborda <mreborda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:21:40 by mreborda          #+#    #+#             */
/*   Updated: 2022/11/02 12:45:18 by mreborda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	a;
	size_t	i;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < n)
	{
		a = 0;
		while ((i + a) < n && big[a + i] == little[a])
		{
			if (little[a + 1] == '\0')
				return ((char *)big + i);
			a++;
		}
		i++;
	}
	return (NULL);
}
