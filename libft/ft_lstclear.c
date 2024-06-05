/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschmitz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 13:34:15 by jschmitz          #+#    #+#             */
/*   Updated: 2024/06/05 14:25:22 by jschmitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
    int i;

    if (!lst || !del)
        return ;
    
    i = ft_lstsize(lst);
    while (i > 0)
    {
       ft_lstdelone(ft_lstlast); 
        i--;
    }
}
{
    t_list  *current;
    t_list  *temp;

    current = *lst;
    while (current != NULL)
    {
        temp = current;
        current = current->next;
        del(temp->content);
        free(temp);
    }
}