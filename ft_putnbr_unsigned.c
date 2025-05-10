/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 17:34:37 by laanikid          #+#    #+#             */
/*   Updated: 2025/05/10 17:36:38 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int n, int *c)
{
	unsigned long	nb;

	nb = n;
	if (nb >= 10)
		ft_putnbr_unsigned(nb / 10, c);
	ft_putchar(nb % 10 + '0', c);
}
