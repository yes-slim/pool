/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 10:40:32 by yes-slim          #+#    #+#             */
/*   Updated: 2022/08/01 22:25:08 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lc(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_lc(str);
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= '0' && str[i] <= '9')))
		{
			if ((! (str[i] >= 'A' && str[i] <= 'Z'))
				&& (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
					str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>
int main()
{
	char str[] = "salut, coMMent tu vas ? 42mOts quAraNte-dEuX; cinQuanTe+et+un";
	printf("%s\n", ft_strcapitalize(str));
	return(0);
}
