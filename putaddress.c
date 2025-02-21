/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putaddress.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:01:08 by rnomoto           #+#    #+#             */
/*   Updated: 2025/02/20 19:53:41 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int putaddress(uintptr_t adr, int len)
{
    char *base;

    base = "0123456789abcdef";
    if (adr > 15)
        len = putaddress(adr / 16, len);
    ft_putchar_fd(base[adr % 16], 1);
len += 1;

}
