/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 15:42:29 by laanikid          #+#    #+#             */
/*   Updated: 2025/05/10 17:21:55 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putptr(void *ptr, int *c)
{
	if (!ptr)
		ft_putstr("(nil)", c);
	else
	{
		ft_putstr("0x", c);
		ft_puthex_base((unsigned long)ptr, HEX_LOWER, c);
	}
}
