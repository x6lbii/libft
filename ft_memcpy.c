/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saealzaa <saealzaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 07:21:09 by saealzaa          #+#    #+#             */
/*   Updated: 2022/05/27 05:52:10 by saealzaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    *memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    unsigned char   *altdst;
    unsigned char   *altsrc;

    altdst = (unsigned char *) dst;
    altsrc = (unsigned char *) src;
    while (n > 0)
    {
        *altdst = *altsrc;
        altdst++;
        altsrc++;
        n--;
    }
    return (dst)
}