/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:23:33 by rnomoto           #+#    #+#             */
/*   Updated: 2025/02/20 18:30:15 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int case_s(va_list *ap, int len)
{
    char *str;

    str = va_arg(*ap, char *);
    ft_putstr_fd(str, 1);

    return (len + ft_strlen(str));
}
