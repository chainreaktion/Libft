/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 19:17:44 by jschmitz          #+#    #+#             */
/*   Updated: 2024/05/30 17:24:13 by jschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int	i;
	char	*res;
	
	if (len < (ft_strlen(s) + 1))
		return (0);
	res = malloc(sizeof(char) * (len - start + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (s[start] && i < (len - start))
	{
		res[i] = s[i + start];
		i++;
	}
	res[i] = '\0';
	return (res);
}
