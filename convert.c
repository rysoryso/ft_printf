/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:17:19 by rnomoto           #+#    #+#             */
/*   Updated: 2025/02/20 18:38:09 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int convert(char sign, va_list *ap, int len)
{
    if (sign == 'c')
        len = case_c(ap, len);
    else if (sign == 's')
        len = case_s(ap, len);
    else if (sign == 'p')
        len = case_p(ap, len);


    return len;
}
