/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 15:34:48 by laanikid          #+#    #+#             */
/*   Updated: 2025/05/10 17:22:33 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_puthex_base(unsigned long n, char *base, int *c)
{
	if (n >= 16)
		ft_puthex_base(n / 16, base, c);
	ft_putchar(base[n % 16], c);
}
