/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saealzaa <saealzaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 02:58:21 by saealzaa          #+#    #+#             */
/*   Updated: 2022/05/27 05:52:10 by saealzaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *strchr(const char *s, int c)
{
    char    altc;
    char    *alts;

    i = 0;
    alts = (char*)s;
    altc = c;
    while (alts[i] != altc)
    {
        if (alts[i] == '\0')
        {
            return (NULL);
        }
        i++;
    }
    return ((char*)alts + i);
}