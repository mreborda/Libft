/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreborda <mreborda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:21:40 by mreborda          #+#    #+#             */
/*   Updated: 2022/10/25 18:21:48 by mreborda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	f;

	f = 0;
	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (n > i && s1[i] != '\0')
	{
		if (s1[i] == s2[f])
		{
			while (i + f < n && s1[i + f] == s2[j])
			{
				if (s1[i + f] == '\0')
					return ((char *)s1 + f);
				i++;
			}
		}
		f++;
	}
	return (NULL)
}
