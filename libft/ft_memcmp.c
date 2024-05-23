/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 20:16:02 by jschmitz          #+#    #+#             */
/*   Updated: 2024/05/22 20:23:56 by jschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*p1;
	char 	*p2;

	i = 0;
	p1 = (char *)s1;
	p2 = (char *)s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}


