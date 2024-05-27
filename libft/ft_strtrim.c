/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:36:35 by jschmitz          #+#    #+#             */
/*   Updated: 2024/05/24 18:08:15 by jschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int static	ft_contains(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		c;
	char	*res;
	
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_contains(set, s1[i]) == 0)
		i++;
	while (j > i && ft_contains(set, s1[j - 1]) == 0)
		j--;
	if (j - i == 0)
		return (0);
	res = malloc(sizeof(char) * (j - i + 1));
	if (res == NULL)
		return (NULL);
	c = 0;
	while (i < j)
	{
		res[c] = s1[i];
		i++;
		c++;
	}
	res[c] = '\0';
	return (res);
}

/*#include <stdio.h>

int	main()
{
	char *str = "ababaaaMy name is Simonbbaaabbad";
	char *set = "ab";
	printf("String: %s\tSet: %s\nResult: %s\n", str, set, ft_strtrim(str, set));
	return (0);
}*/