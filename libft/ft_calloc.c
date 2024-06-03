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

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*res;

	if (nitems != 0 && size != 0 && ((nitems * size) / size != nitems))
		return (NULL);
	res = malloc(nitems * size);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, nitems * size);
	return (res);
}
