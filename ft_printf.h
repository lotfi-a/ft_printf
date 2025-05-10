/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 17:56:27 by laanikid          #+#    #+#             */
/*   Updated: 2025/05/10 17:34:22 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
void	ft_putchar(char s, int *c);
void	ft_putstr(const char *s, int *c);
void	ft_putnbr_unsigned(unsigned int n, int *c);
void	ft_putnbr(int n, int *c);
void	ft_putptr(void *ptr, int *c);
void	ft_puthex_base(unsigned long n, char *base, int *c);
#endif // !FT_PRINTF_H
