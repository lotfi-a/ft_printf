/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 18:28:12 by laanikid          #+#    #+#             */
/*   Updated: 2025/05/10 17:57:02 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	handle_char(char spec, va_list args, int *count)
{
	if (spec == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (spec == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (spec == '%')
		ft_putchar('%', count);
}

void	handle_number(char spec, va_list args, int *count)
{
	if (spec == 'd' || spec == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (spec == 'u')
		ft_putnbr_unsigned(va_arg(args, unsigned int), count);
}

void	handle_special(char spec, va_list args, int *count)
{
	if (spec == 'x')
		ft_puthex_base(va_arg(args, unsigned int), HEX_LOWER, count);
	else if (spec == 'X')
		ft_puthex_base(va_arg(args, unsigned int), HEX_UPPER, count);
	else if (spec == 'p')
		ft_putptr(va_arg(args, void *), count);
}

void	parse_format(const char *s, va_list args, int *count)
{
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			if (*s == 'c' || *s == 's' || *s == '%')
				handle_char(*s, args, count);
			else if (*s == 'd' || *s == 'i' || *s == 'u')
				handle_number(*s, args, count);
			else if (*s == 'x' || *s == 'X' || *s == 'p')
				handle_special(*s, args, count);
		}
		else
			ft_putchar(*s, count);
		s++;
	}
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;

	if (!s)
		return (-1);
	va_start(args, s);
	count = 0;
	parse_format(s, args, &count);
	va_end(args);
	return (count);
}
