/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 21:23:55 by yes-slim          #+#    #+#             */
/*   Updated: 2022/08/05 21:42:16 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	len;

	i = 0;
	len = size - 1;
	while (i <= len)
	{
		tmp = tab[i];
		tab[i] = tab[len];
		tab[len] = tmp;
		i++;
		len--;
	}
}
