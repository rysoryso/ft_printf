/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:42:23 by rnomoto           #+#    #+#             */
/*   Updated: 2025/02/20 19:53:17 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int case_p(va_list *ap, int len)
{
    void *p;
    void **pp;
    uintptr_t adr;

    p = va_arg(*ap, void *);
    pp = &p;
    adr = (uintptr_t)pp;
    ft_putstr_fd("0x", 1);
    len += 2;


    return (len + putaddress(adr, len));
}
