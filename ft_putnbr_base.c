/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:13:34 by rnomoto           #+#    #+#             */
/*   Updated: 2025/02/22 14:07:59 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_base(int nbr, char *base, int len)
{
    long nbr_long;

    nbr_long = nbr;
    if (nbr_long < 0)
    {
        ft_putchar_fd('-', 1);
        len ++;
        nbr_long *= -1;
    }
    if (nbr_long > (int)ft_strlen(base))
        len = ft_putnbr_base(nbr_long / (int)ft_strlen(base), base, len);
    ft_putchar_fd(base[nbr_long % ft_strlen(base)], 1);
    len ++;

    return (len);
}
