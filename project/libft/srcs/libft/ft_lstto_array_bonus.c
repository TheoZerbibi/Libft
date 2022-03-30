/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstto_array_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thzeribi <thzeribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 05:22:58 by thzeribi          #+#    #+#             */
/*   Updated: 2022/01/25 16:14:07 by thzeribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_lstto_array(t_list *lst)
{
	t_list	**tmp;
	char	**res;
	int		size;
	int		i;

	i = -1;
	tmp = &lst;
	size = ft_lstsize(lst);
	res = NULL;
	res = malloc(sizeof(char *) * (size + 1));
	while (lst)
	{
		res[++i] = ft_strdup(lst->content);
		lst = lst->next;
	}
	free(tmp);
	res[++i] = NULL;
	return (res);
}
