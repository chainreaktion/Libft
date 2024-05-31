/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:36:35 by jschmitz          #+#    #+#             */
/*   Updated: 2024/05/31 22:30:41 by jschmitz         ###   ########.fr       */
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

if (!s1)
//		return (0);
//	if (!set)
		return ((char *)ft_calloc(1, 1));
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	j = ft_strlen(s1);
	if (j == 0)
		return ((char *)ft_calloc(1, 1));
	while (s1[i] && ft_contains(set, s1[i]) == 0)
		i++;
	while (j > i && ft_contains(set, s1[j - 1]) == 0)
		j--;
	if (j - i == 0)
		return (0);
//	res = (char *)calloc(1, j - i + 1);
	res = malloc(sizeof(char) * j - i + 1);
	if (res == NULL)
		return (NULL);
	c = 0;
//	ft_memcpy(&res, s1 + i, j);
	while (i < j)
	{
		res[c] = s1[i];
		i++;
		c++;
	}
	res[c] = '\0';
//	res[j + 1] = '\0';
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
