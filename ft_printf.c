/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:34:41 by rnomoto           #+#    #+#             */
/*   Updated: 2025/02/20 18:32:24 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	va_list ap;
	int len;
	int i  = 0;

	va_start(ap, format);
	len = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			ft_putchar_fd(format[i], 1);
		}
		else if (format[i] == '%')
		{
			i++;
			len = convert(format[i], &ap, len);
		}
		i++;
	}
	va_end(ap);
	return (len);
}

#include <stdio.h>

int main(void)
{
	int ft = 0;
	char c = 'A';
	ft = ft_printf("%c\n", c);
	printf("len: %d\n", ft);

	char *str = "42Tokyo";
	ft = ft_printf("%s\n", str);
	printf("len: %d\n", ft);

	return 0;
}
