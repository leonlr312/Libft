/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoda-lu <leoda-lu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:03:00 by leoda-lu          #+#    #+#             */
/*   Updated: 2023/06/27 09:55:37 by leoda-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_arg_type(int type, va_list ap)
{
	if (!type)
		return (0);
	if (type == 'd' || type == 'i')
		return (ft_handle_decimal(va_arg(ap, int)));
	else if (type == 'c')
		return (ft_handle_character(va_arg(ap, int)));
	else if (type == 's')
		return (ft_handle_string(va_arg(ap, char *)));
	else if (type == 'p')
		return (ft_handle_pointer(va_arg(ap, void *)));
	else if (type == 'x')
		return (ft_handle_hex_lower(va_arg(ap, int)));
	else if (type == 'X')
		return (ft_handle_hex_upper(va_arg(ap, int)));
	else if (type == 'u')
		return (ft_handle_unsigned(va_arg(ap, size_t)));
	else if (type == '%')
		return (ft_handle_percent());
	return (0);
}

static int	ft_handle(const char *print, va_list ap)
{
	int	type;
	int	index;

	type = 0;
	index = 0;
	while (print[index] != '\0')
	{
		if (print[index] == '%')
		{
			type += ft_arg_type(print[index + 1], ap);
			index++;
		}
		else
		{
			ft_putchar_fd(print[index], 1);
			type++;
		}
		index++;
	}
	return (type);
}

int	ft_printf(const char *print, ...)
{
	va_list	ap;
	int		type;

	if (!print)
		return (0);
	va_start(ap, print);
	type = ft_handle(print, ap);
	va_end(ap);
	return (type);
}
