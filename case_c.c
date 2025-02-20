/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:20:49 by rnomoto           #+#    #+#             */
/*   Updated: 2025/02/20 18:21:09 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int case_c(va_list *ap, int len)
{
    char c;

    c = va_arg(*ap, int);
    ft_putchar_fd(c, 1);
    return (len + 1);
}
