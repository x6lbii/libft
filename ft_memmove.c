/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saealzaa <saealzaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 02:38:06 by saealzaa          #+#    #+#             */
/*   Updated: 2022/05/27 05:52:10 by saealzaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    *memmove(void *dst, const void *src, size_t len)
{
    unsigned char   *temp1;
    unsigned char   *temp2;

    temp1 = dst;
    temp2 = (unsigned char *)src;
        return (ft_memcpy(dst, src, len));
    if (dst > src)
    {
        while(len--)
            temp1[len] = temp2[len];
    }
    return dst;
}