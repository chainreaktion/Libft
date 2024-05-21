/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:33:32 by jschmitz          #+#    #+#             */
/*   Updated: 2024/05/21 13:51:51 by jschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = '\0';
		p++;
		n--;
	}
}
/*
#include <stdio.h>

int	main()
{
	char	s[10] = "AAAAAAAAAA";
	printf("Before: %s\n", s);
	ft_bzero(s, sizeof(s));
	printf("Buffer contents my ft: ");
    for (int i = 0; i < sizeof(s); ++i)
    {
        printf("%c", s[i]);
    }
//	printf("After: %s\n", s);
	return (0);
}*/
