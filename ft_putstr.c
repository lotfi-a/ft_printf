/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 14:57:07 by laanikid          #+#    #+#             */
/*   Updated: 2025/05/10 17:59:24 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putstr(const char *s, int *c)
{
	if (!s)
	{
		ft_putstr("(null)", c);
		return ;
	}
	while (*s)
		ft_putchar(*s++, c);
}
