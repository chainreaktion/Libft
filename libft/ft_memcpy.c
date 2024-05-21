/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:49:28 by jschmitz          #+#    #+#             */
/*   Updated: 2024/05/21 16:27:35 by jschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char    s[10] = "AAAAAAAAAA";
	char    dst1[10];
	char    dst2[10];
	printf("Before : %s\n", s);
	memcpy(dst1, s, sizeof(s));
	ft_memcpy(dst2, s, sizeof(s));
	printf("Dst ft: ");
	for (int i = 0; i < sizeof(s); ++i)
	{
		printf("%c", dst1[i]);
	}
	printf("\tDst me: ");
	for (int i = 0; i < sizeof(s); ++i)
	{
		printf("%c", dst2[i]);
	}
	return (0);
}*/
