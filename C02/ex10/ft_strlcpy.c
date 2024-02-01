/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 11:05:04 by yes-slim          #+#    #+#             */
/*   Updated: 2022/07/31 16:30:38 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_l(char *str)
{
	unsigned int	l;

	l = 0;
	while (str[l] != '\0')
	l++;
	return (l);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	ft_l(src);
	while ((src[i] != '\0') && (i < size -1))
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	return (ft_l(src));
}
