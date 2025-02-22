/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:14:55 by rnomoto           #+#    #+#             */
/*   Updated: 2025/02/22 15:25:46 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	putnbr_unsign(unsigned int nbr, int len)
{
	if (nbr > 9)
		len = putnbr_unsign(nbr / 10, len);
	ft_putchar_fd(nbr % 10 + 48, 1);
	len++;
	return (len);
}

int	case_u(va_list *ap, int len)
{
	unsigned int	n;

	n = va_arg(*ap, unsigned int);
	return (putnbr_unsign(n, len));
}
