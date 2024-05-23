/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 19:33:09 by jschmitz          #+#    #+#             */
/*   Updated: 2024/05/23 20:25:17 by jschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len_s1;
	size_t	len_s2;
	char	*res;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	res = malloc(sizeof(char) * (len_s1 + len_s2 + 1);
	if (res == NULL)
		return (NULL);
	while (i < len_s1)
	{
		res[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len_s2)
	{
		res[i + len_s1] = s2[i];
		i++;
	}
	res[i + len_s1] = '\0';
	return (res)
}
// not sure if this is what they asked for
