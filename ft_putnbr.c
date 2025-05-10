/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 14:58:35 by laanikid          #+#    #+#             */
/*   Updated: 2025/05/10 17:20:45 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr(int n, int *c)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-', c);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10, c);
	ft_putchar(nb % 10 + '0', c);
}
