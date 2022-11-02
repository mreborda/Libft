/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreborda <mreborda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:33:43 by mreborda          #+#    #+#             */
/*   Updated: 2022/11/02 17:16:42 by mreborda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	char	*t;
	int		i;
	int		d;

	i = 0;
	if (!s1 || !set)
		return (0);
	s = ft_strchr(set, *s1);
	while (s1[i] != '\0' && s[0] != '\0')
		i++;
	d = ft_strlen(s1);
	t = ft_strchr(set, s1[d]);
	while (d > 0 && t[i] != '\0')
		d--;
	return (ft_substr(s, 0, d));
}
