/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreborda <mreborda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:14:15 by mreborda          #+#    #+#             */
/*   Updated: 2022/11/15 14:25:25 by mreborda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*str;

	if (!*lst)
	{
		ft_lstadd_front(lst, new);
		return ;
	}
	str = ft_lstlast(*lst);
	str->next = new;
}
