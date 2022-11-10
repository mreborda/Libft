/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreborda <mreborda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:21:28 by mreborda          #+#    #+#             */
/*   Updated: 2022/11/03 16:41:21 by mreborda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	a1;
	unsigned char	a2;

	i = 0;
	if (n == 0)
		return (0);
	while (i + 1 < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	a1 = s1[i];
	a2 = s2[i];
	return (a1 - a2);
}
