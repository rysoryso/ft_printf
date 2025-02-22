/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:34:41 by rnomoto           #+#    #+#             */
/*   Updated: 2025/02/22 17:25:46 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;
	int		i;

	i = 0;
	va_start(ap, format);
	len = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			ft_putchar_fd(format[i], 1);
			len++;
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

/*
#include <stdio.h>

int	main(void)
{
	int				ft;
	int				lb;
	char			c;
	char			*str;
	char			*mem;
	int				n;
	unsigned int	u;

	ft = 0;
	lb = 0;
	//%c
	c = 'A';
	ft = ft_printf("ft_printf: %c\n", c);
	lb = printf("   printf: %c\n", c);
	printf("len_ft: %d\n", ft);
	printf("len_lb: %d\n", lb);
	if(ft == lb)
		printf("OK\n");
	else
		printf("KO\n");
	//%s
	str = "42Tokyo";
	ft = ft_printf("ft_printf: %s\n", str);
	lb = printf("   printf: %s\n", str);
	printf("len_ft: %d\n", ft);
	printf("len_lb: %d\n", lb);
	if(ft == lb)
		printf("OK\n");
	else
		printf("KO\n");
	//%p
	mem = (char *)malloc(10 * sizeof(char));
	if (mem == NULL)
	{
		printf("mem allocate error.\n");
		return (1);
	}
	ft = ft_printf("ft_printf: %p\n", mem);
	lb = printf("   printf: %p\n", mem);
	printf("len_ft: %d\n", ft);
	printf("len_lb: %d\n", lb);
	if(ft == lb)
		printf("OK\n");
	else
		printf("KO\n");
	free(mem);
	//%d
	n = -2147483648;
	ft = ft_printf("ft_printf: %d\n", n);
	lb = printf("   printf: %d\n", n);
	printf("len_ft: %d\n", ft);
	printf("len_lb: %d\n", lb);
	if(ft == lb)
		printf("OK\n");
	else
		printf("KO\n");
	//%u
	u = 4294967295;
	ft = ft_printf("ft_printf: %u\n", u);
	lb = printf("   printf: %u\n", u);
	printf("len_ft: %d\n", ft);
	printf("len_lb: %d\n", lb);
	if(ft == lb)
		printf("OK\n");
	else
		printf("KO\n");
	//%x
	u = 4294967295;
	ft = ft_printf("ft_printf: %x\n", u);
	lb = printf("   printf: %x\n", u);
	printf("len_ft: %d\n", ft);
	printf("len_lb: %d\n", lb);
	if(ft == lb)
		printf("OK\n");
	else
		printf("KO\n");
	//%X
	u = 4294967295;
	ft = ft_printf("ft_printf: %X\n", u);
	lb = printf("   printf: %X\n", u);
	printf("len_ft: %d\n", ft);
	printf("len_lb: %d\n", lb);
	if(ft == lb)
		printf("OK\n");
	else
		printf("KO\n");
	return (0);
}
*/
