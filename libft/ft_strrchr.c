/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:59:23 by jschmitz          #+#    #+#             */
/*   Updated: 2024/05/21 21:28:05 by jschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.a"
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((char *)(s));
	while (len >= 0) 
	{
		if (s[len + 1] == c)
			return ((char *)(s + len + 1));
		len--;
	}   
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	char *s = "Ceci est un test";

	int c = 'e';
	int c1 = 'a';
	printf("S: %s\t c: %d\n moi: %s\n ft: %s\n", s, c, ft_strrchr(s, c), strrchr(s, c));
	printf("S: %s\t c1: %d\n moi: %s\n ft: %s\n", s, c1, ft_strrchr(s, c1), strrchr(s, c1));
	return (0);
}
