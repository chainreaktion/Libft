/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 21:23:47 by jschmitz          #+#    #+#             */
/*   Updated: 2024/05/31 19:42:00 by jschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
*/
char	*ft_strdup(const char *s)
{
	int		i;
	char	*cpy;

	cpy = malloc (sizeof(char) * (ft_strlen(s) + 1));
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
/*
#include <string.h>
#include <stdio.h>

int	main()
{
	char *str = "j0yuh9nLsSOGhiPAtPE0mpGXYpzS19";
	char *dest = ft_strdup(str);
	char *dest1 = strdup(str);

	printf("My fct: %s\n", dest);
	printf("The fct: %s\n", dest1);
	free (dest);
	free (dest1);
	return (0);
}*/
