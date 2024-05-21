/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:33:55 by jschmitz          #+#    #+#             */
/*   Updated: 2024/05/21 17:49:59 by jschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t  i;
	unsigned char	temp[n];

	i = 0;
	while (i < n)
    {  
		temp[i] = *(unsigned char *)(src + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(dst + i) = temp[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char    s[26] = "ABCDEFGHIJKLMNOPQRStuvwxy9";
	char    dst1[27];
	char    dst2[27];
	printf("Before : %s\n", s);
	memmove(dst1, s, sizeof(s));
	ft_memmove(dst2, s, sizeof(s));
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
