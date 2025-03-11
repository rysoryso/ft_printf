/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:01:07 by rnomoto           #+#    #+#             */
/*   Updated: 2025/03/11 16:06:55 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	putnbr_dec(int d, int len)
{
	long	d_long;

	d_long = d;
	if (d_long < 0)
	{
		ft_putchar_fd('-', 1);
		len++;
		d_long *= -1;
	}
	if (d_long >= 10)
		len = putnbr_dec(d_long / 10, len);
	ft_putchar_fd(d_long % 10 + 48, 1);
	len++;
	return (len);
}

int	case_d(va_list *ap, int len)
{
	int	d;

	d = va_arg(*ap, int);
	return (putnbr_dec(d, len));
}
