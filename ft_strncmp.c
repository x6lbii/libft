/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saealzaa <saealzaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 03:42:55 by saealzaa          #+#    #+#             */
/*   Updated: 2022/05/27 05:52:10 by saealzaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned int    i;

    i = 0;
    while ((s1[i] != '\0' || s2[i] != '\0') && n--)
    {
        if (s1[i] = s2[i])
        {
            return ((unsigned char)s1[i]) - ((unsigned char)s2[i])
        }
        i++;
    }
    return (0);
}