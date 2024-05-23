/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:46:56 by jschmitz          #+#    #+#             */
/*   Updated: 2024/05/20 20:39:31 by jschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	while (src[i] && (len_dst + i) < (siz - 1))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	return (len_dst + i);
}

/*#include <string.h>
#include <stdio.h>

int	main()
{
	const char *src = "un test.";
	char dst_m[18] = "Ceci est ";
//	char dst_f[50] = "Ceci est "; 
	size_t siz = 18;
	size_t res_m;
//	size_t res_f = strlcat(dst_f, src, siz);
	printf("src: %s, dst before: %s\n", src, dst_m); 
	ft_strlcat(dst_m, src, siz);
	res_m = ft_strlcat(dst_m, src, siz);
//	strlcat(dst_f, src, siz);
	printf("dst_m apres: %s, my res: %zu\n", dst_m, res_m);
	return (0);
}*/
