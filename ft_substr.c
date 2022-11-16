/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreborda <mreborda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:05:51 by mreborda          #+#    #+#             */
/*   Updated: 2022/11/15 15:59:50 by mreborda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			e;
	unsigned int	size;
	char			*sub;

	i = 0;
	e = 0;
	size = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= size)
		len = 0;
	if (len >= size - start)
		len = size - start;
	sub = (char *)malloc(sizeof(*s) * (len + 1));
	if (!sub)
		return (NULL);
	while (s[i] != '\0')
	{
		if (i >= start && e < len)
			sub[e++] = s[i];
		i++;
	}
	sub[e] = '\0';
	return (sub);
}
