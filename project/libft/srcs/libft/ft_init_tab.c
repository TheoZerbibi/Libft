/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thzeribi <thzeribi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:46:39 by thzeribi          #+#    #+#             */
/*   Updated: 2021/04/26 14:08:34 by thzeribi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	init_tab(int *tab, int size)
{
	int	i;

	i = -1;
	while (i++ < (size - 1))
		tab[i] = 0;
	return (tab[size]);
}
