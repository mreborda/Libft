/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreborda <mreborda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:18:30 by mreborda          #+#    #+#             */
/*   Updated: 2022/11/15 13:30:16 by mreborda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*str;

	while (*lst)
	{
		str = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = str;
	}
	*lst = NULL;
}
