/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saealzaa <saealzaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 03:59:51 by saealzaa          #+#    #+#             */
/*   Updated: 2022/05/27 05:52:10 by saealzaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    int     length;
    char    *large;
    char    *small;

    if (*needle == '\0')
    {
     return ((char *)haystack);
    }
    large = (char *)haystack;
    small = (char *)needle;
    i = 0;
    length = ft_strlen(small);
    while (large[i] != '\0' && (i + length) <= len)
    {
        if (ft_strncmp((large + i), small, length) == 0)
        {
          return (large + i);
        }
        i++;
    }
    return (NULL);
}