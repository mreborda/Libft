/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreborda <mreborda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:19:48 by mreborda          #+#    #+#             */
/*   Updated: 2022/11/17 11:40:11 by mreborda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sep_count(char const *s, char c)
{
	int		d;
	int		w;
	int		i;

	d = 0;
	w = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && d == 0)
		{
			d = 1;
			w++;
		}
		else if (s[i] == c)
			d = 0;
		i++;
	}
	return (w);
}

int	wl(char const *s, char c, int i)
{
	int	d;

	d = 0;
	while (d < i)
		d++;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (i - d == 0)
		return (0);
	return (i - d);
}

int	aux(char const *s, int i, char c)
{
	while (s[i] == c)
			i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		nmb;
	int		k;
	char	**str;

	i = 0;
	nmb = -1;
	str = (char **)malloc((sep_count(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str[sep_count(s, c)] = 0;
	while (s[i] != '\0')
	{
		i = aux(s, i, c);
		if (s[i] != c && s[i])
		{	
			k = 0;
			str[++nmb] = (char *)ft_calloc((wl(s, c, i) + 1), sizeof(char));
			if (!str[nmb])
				return (NULL);
			while (s[i] && s[i] != c)
				str[nmb][k++] = s[i++];
		}
	}
	return (str);
}
