/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saealzaa <saealzaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:02:47 by saealzaa          #+#    #+#             */
/*   Updated: 2022/05/27 05:52:10 by saealzaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
    {
        c = c + 32;
    }
        return c;
}