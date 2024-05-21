/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:26:53 by jschmitz          #+#    #+#             */
/*   Updated: 2024/05/20 17:25:34 by jschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1) && s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "Heluuu";
	char s2[] = "Helluu";
	unsigned int n = 44;

	int diff = ft_strncmp(s1, s2, n);
	int diff1 = strncmp(s1, s2, n);    

	printf("Difference %s +  %s:\nMe: %d\nFunction: %d\n", s1, s2, diff, diff1);
	return (0);
}*/
