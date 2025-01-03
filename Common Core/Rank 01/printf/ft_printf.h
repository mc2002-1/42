/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaria-g <mmaria-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 23:04:03 by mmaria-g          #+#    #+#             */
/*   Updated: 2024/11/28 23:17:20 by mmaria-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdint.h>

char		*ft_itoa(int n);
int			ft_printf(const char *format, ...);
int			ft_putchar(int c);
int			ft_putstr(char *str);
int			ft_puthex(unsigned long p);
int			ft_putpointer(unsigned long pointer);
int			ft_putunsigned(unsigned int n);
size_t		ft_strlen(const char *str);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);

#endif