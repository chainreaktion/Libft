/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 10:47:26 by jschmitz          #+#    #+#             */
/*   Updated: 2024/05/27 10:47:29 by jschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_count(char const *s, char c)
{
    int count;  
    int    i;

    i = 0;
    count = 0; 
    while (s[i])
    {
        if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
            count++;
        i++;
    }
    return (count);
}

char    *ft_getword(const char *s, char c, int pos)
{
    int len;
    char    *word;

    len = 0;
    while (s[pos + len] && s[pos + len] != c)
        len++;
    word = (char *)malloc(sizeof(char) * (len + 1));
    if (word == NULL)
        return (NULL);
    ft_strlcpy(word, (s + pos), (len + 1));
    return (word);
}

char    **ft_split(char const *s, char c)
{
    int i;
    int pos;
    int count;
    char **arr;

    i = 0;
    count = ft_count(s, c);   
    arr = (char **) ft_calloc(count + 1, sizeof(char));
    if (arr == NULL)
        return (NULL);
    j = 0;
    while (s[j])
    {
        if (s[pos] != c)
        {
            arr[i] = ft_getword((s, c, pos));
            i++;
       } 
        pos++;
    }
    arr[i] = NULL;
    return (arr);
}

#include <stdio.h>

int main()
{
    char c = 'c';
    int i;
    const char *str = "Rochenkochen";
    char **split;

    i = 0;
    printf("Inputstring: %s\n Delimiter: %c\n", str, c);
    split = ft_split(str, c);
    i = 0;
	while (split[i] != NULL)
	{
		printf("Result: %s ", split[i]);
		i++;
	}
	free (split);
	return (0);


}