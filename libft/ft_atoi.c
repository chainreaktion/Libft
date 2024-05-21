/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 13:19:49 by jschmitz          #+#    #+#             */
/*   Updated: 2024/05/20 21:22:48 by jschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main()
{
	char *str1 = "  \t  -1234ab567";
	char *str2 = "---+--+1234ab567";
	char *str3 = "-1234ab567";
	char *str4 = "    +1234ab567";
	char *str5 = "    --+1234ab567";
	char *str6 = "+-1234567";
	char *str7 = "2147483647";
	char *str8 = "-2147483647";
	char *str9 = "2147483648";
	char *str10 = "-2147483648";
	printf("1 -> me: %d\t atoi: %d\n", ft_atoi(str1), atoi(str1));
	printf("2 -> me: %d\t atoi: %d\n", ft_atoi(str2), atoi(str2));
	printf("3 -> me: %d\t atoi: %d\n", ft_atoi(str3), atoi(str3));
	printf("4 -> me: %d\t atoi: %d\n", ft_atoi(str4), atoi(str4));
	printf("5 -> me: %d\t atoi: %d\n", ft_atoi(str5), atoi(str5));
	printf("6 -> me: %d\t atoi: %d\n", ft_atoi(str6), atoi(str6));
	printf("7 -> me: %d\t atoi: %d\n", ft_atoi(str7), atoi(str7));
	printf("8 -> me: %d\t atoi: %d\n", ft_atoi(str8), atoi(str8));
	printf("9 -> me: %d\t atoi: %d\n", ft_atoi(str9), atoi(str9));
	printf("10 -> me: %d\t atoi: %d\n", ft_atoi(str10), atoi(str10));
	return (0);
}*/
