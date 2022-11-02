/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreborda <mreborda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:57:14 by mreborda          #+#    #+#             */
/*   Updated: 2022/11/02 12:05:47 by mreborda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!s)
		return (NULL);
	ft_memcpy(s, str, ft_strlen(str) + 1);
	return (s);
}
