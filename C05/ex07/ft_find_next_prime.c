/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 20:25:16 by yes-slim          #+#    #+#             */
/*   Updated: 2022/08/08 13:38:11 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 0 || nb == 0 || nb == 1)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	ft_is_prime(nb);
	if (ft_is_prime(nb) == 1)
		return (nb);
	nb++;
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
