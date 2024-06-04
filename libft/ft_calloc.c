/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:05:46 by jschmitz          #+#    #+#             */
/*   Updated: 2024/06/03 14:49:26 by jschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*res;

	if (size != 0 && nitems > SIZE_MAX / size)
		return (NULL);
	res = malloc(nitems * size);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, nitems * size);
	return (res);
}
