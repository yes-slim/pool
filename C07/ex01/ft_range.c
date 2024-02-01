/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 08:54:18 by yes-slim          #+#    #+#             */
/*   Updated: 2022/08/09 10:22:32 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	m;
	int	*tab;

	if (min >= max)
		return (NULL);
	i = 0;
	m = min;
	tab = malloc((max - min) * sizeof(int));
	while (i < (max - min))
	{
		tab[i] = m;
		i++;
		m++;
	}
	return (tab);
}

/*
#include <stdio.h>
int main()
{
	int *p;
	p = ft_range(10, 5);
	int i = 0;
	printf("%p ", p);
	while (i < 0)
	{
		printf("%d ", p[i]);
		i++;
	}
*/
