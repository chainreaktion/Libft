/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:05:27 by jschmitz          #+#    #+#             */
/*   Updated: 2024/05/28 21:57:27 by jschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char	*res;
	
	if (!s || !f)
		return (NULL);
	len = (unsigned int)ft_strlen(s);

	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = f(i, s[i]);
	}
	res[i] = '\0';
	return (res);
}

#include <stdio.h>

int	main()
{
	char *str = "dies ist alles klein";

	printf("Before: %s\n After: %s\n", str, ft_strmapi(str, test_capitalize));
	return (0);
}

