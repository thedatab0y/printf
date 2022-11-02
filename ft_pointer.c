/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busmanov <busmanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 01:58:22 by busmanov          #+#    #+#             */
/*   Updated: 2022/10/31 03:34:52 by busmanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(unsigned long nb)
{
	int	len;

	len = 0;
	if (nb < 10)
		len = len + ft_char(nb + 48);
	else if (nb < 16)
		len = len + ft_char(nb + 'a' - 10);
	else
	{
		len = len + ft_ptr(nb / 16);
		len = len + ft_ptr(nb % 16);
	}
	return (len);
}

int	ft_pri_ptr(unsigned long nb)
{
	int	len;

	len = 0;
	len = len + write(1,"0x",2);
	len = len + ft_ptr(nb);
	return (len);
}
