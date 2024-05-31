/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 19:17:44 by jschmitz          #+#    #+#             */
/*   Updated: 2024/05/31 22:15:45 by jschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*res;

	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (s[start] && i < ((unsigned int)len))
	{
		res[i] = s[i + start];
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>

int	main()
{
	char *str = "i just want this part #############";
	size_t size = 10;
	char *ret = ft_substr(str, 5, size);

	printf("Str: %s\nSize: %zu\n Res: %s\n", str, size, ret);
	return (0);
}*/
