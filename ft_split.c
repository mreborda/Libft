/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreborda <mreborda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:19:48 by mreborda          #+#    #+#             */
/*   Updated: 2022/11/09 16:35:22 by mreborda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**sep_count(char const *s, char c)
{
	int		d;
	int		i;
	char	**str;

	d = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			d++;
		i++;
	}
	str = (char **)malloc((d + 2) * sizeof(char *));
	if (!str)
		return (NULL);
	str[d + 1] = '\0';
	return (str);
}

int	wl(char const *s, char c, int i)
{
	int	d;

	d = 0;
	while (d < i)
		d++;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i - d);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		nmb;
	int		k;
	char	**str;

	i = 0;
	nmb = 0;
	str = sep_count(s, c);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
		{	
			k = 0;
			str[nmb] = (char *)ft_calloc((wl(s, c, i) + 1), sizeof(char));
			if (!str[nmb])
				return (NULL);
			while (s[i] && s[i] != c)
				str[nmb][k++] = s[i++];
			nmb++;
		}
	}
	return (str);
}
