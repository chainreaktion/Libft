/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:38:55 by jschmitz          #+#    #+#             */
/*   Updated: 2024/05/20 18:39:51 by jschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size_dst)
{
	unsigned int	i;
	unsigned int	len_src;

	i = 0;
	len_src = ft_strlen(src);
	if (size_dst < 1)
		return (len_src);
	while (src[i] && i < (size_dst - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}
/*
#include <stdio.h>

int		main(void)
{
	const char src[] = "Salut tu vas bien ?";
	char dst[20];
	size_t	n = 20;
	size_t	res = ft_strlcpy(dst, src, n);

	printf("src: %d - %s\n", ft_strlen(src), src);
	printf("resultat: %zu - %s\n", res, dst);
	return(0);
}*/
