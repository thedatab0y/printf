/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busmanov <busmanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:41:36 by busmanov          #+#    #+#             */
/*   Updated: 2022/10/30 13:30:46 by busmanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *placeholders, ...);
int		ft_format(va_list list, char f);
int		ft_char(char c);
int		ft_str(char *string);
int		ft_putnbr(int n);
int		ft_unsigned(unsigned int nb);

#endif
