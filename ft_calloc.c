/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreborda <mreborda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:30:53 by mreborda          #+#    #+#             */
/*   Updated: 2022/10/31 15:33:11 by mreborda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*s;

	s = malloc(nitems * size);
	if (s[0] == '\0')
		return (NULL);
	ft_memset(s, 0, nitems * size);
	return (s);
}
