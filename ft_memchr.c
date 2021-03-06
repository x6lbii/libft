/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saealzaa <saealzaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 04:51:07 by saealzaa          #+#    #+#             */
/*   Updated: 2022/05/27 05:52:10 by saealzaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    *memchr(const void *s, int c, size_t n)
{
    unsigned char   *alts;
    size_t          i;

    alts = (unsigned char *)s;
    i = 0;
    while (n> i)
    {
        if (alts[i] == (unsigned char)c)
        {
            return (&alts[i]);
        }
        i++;
    }
    return (NULL);
}