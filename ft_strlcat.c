/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saealzaa <saealzaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 05:47:00 by saealzaa          #+#    #+#             */
/*   Updated: 2022/05/27 05:52:10 by saealzaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t  strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t  altdst;
    size_t  altsrc;
    size_t  i;

    if (!size)
    {
        return (ft_strlen(dst) + size);
    }
    altsrc = ft_strlen(src);
    i = 0;
    while (dst[i] && i < size)
    {
        i++;
    }
    altdst = i;
    while (src[i - altdst] && i < size - 1)
    {
        dst[i] = src[i - altdst];
        i++;
    }
    if (altdst < size)
    {
        dst[i] = '\0';
    }
    return (altdst + altsrc);
}