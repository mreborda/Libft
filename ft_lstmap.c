/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreborda <mreborda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:31:24 by mreborda          #+#    #+#             */
/*   Updated: 2022/11/15 14:26:47 by mreborda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*str;
	t_list	*temp;

	str = NULL;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			ft_lstclear(&str, del);
			return (str);
		}
		lst = lst->next;
		ft_lstadd_back(&str, temp);
	}
	return (str);
}
