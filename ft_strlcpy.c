/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saealzaa <saealzaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 05:23:17 by saealzaa          #+#    #+#             */
/*   Updated: 2022/05/27 05:52:10 by saealzaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t  strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (dest == 0 || source == 0)
    {
        return (0);
    }
    if (dstsize > 0)
    {
        while (source[j] && j < dstsize - 1)
        {
            dest[j] = source[j];
            j++;
        }
        dest[j] = '\0';
    }
    while (source[i])
        i++;
    return (i);
}