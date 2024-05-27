/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:29:42 by jschmitz          #+#    #+#             */
/*   Updated: 2024/05/27 19:45:57 by jschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_fill_string(char *res, int n)
{
	if (n / 10 != 0)
		ft_fill_string(res + 1, (n / 10));
	else 
		*res = n % 10 + '0';
}

char	*ft_itoa(int n)
{
	char *res;
	int	len;

	len = (n / 10) + 2;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	res = (char *)malloc(sizeof(char) * len + 1);
	if (res == NULL)
		return (NULL);
	ft_fill_string(res, n);
	res[len + 1] = '\0';
	return (res);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	int i = 1;
	while (i < argc)
	{
		printf("%s\n", ft_itoa(atoi(argv[i])));
		i++;
	}
	return (0);
}
