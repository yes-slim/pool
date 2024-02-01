/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 10:37:30 by yes-slim          #+#    #+#             */
/*   Updated: 2022/08/09 10:48:20 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	m;

	if (min >= max)
	{
		return (0);
		*range == NULL;
	}
	i = 0;
	m = min;
	*range  = malloc((max - min) * sizeof(int));
	if (tab == NULL)
		return (-1);
	while (i < (max - min))
	{
		*range[i] = m;
		i++;
		m++;
	}
	return (max - min);
}

#include <stdio.h>
int main()
{
	
}
