/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:42:23 by rnomoto           #+#    #+#             */
/*   Updated: 2025/02/22 13:41:22 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int putaddress(intptr_t adr, int len)
{
    char *base;

    base = "0123456789abcdef";
    if (adr > 0xf)
        len = putaddress(adr / 0x10, len);
    ft_putchar_fd(base[adr % 0x10], 1);
    len ++;

    return len;
}

int case_p(va_list *ap, int len)
{
    void *p;

    p = va_arg(*ap, void *);
    ft_putstr_fd("0x", 1);
    len += 2;

    return (putaddress((intptr_t)p, len));
}
