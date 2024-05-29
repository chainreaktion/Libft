/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_capitalize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 21:53:58 by jschmitz          #+#    #+#             */
/*   Updated: 2024/05/29 12:18:53 by jschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	test_capitalize(unsigned int index, char *s) 
{
    if (s[index] >= 'a' && s[index] <= 'z') 
	{
        s[index] -= ('a' - 'A');
    }
}