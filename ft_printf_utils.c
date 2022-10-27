/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busmanov <busmanov@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:15:59 by busmanov          #+#    #+#             */
/*   Updated: 2022/10/27 22:16:55 by busmanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_format(va_list list, char f)
{
	int	len;

	len = 0;
	if (f=='c')
		len += ft_char(va_arg(list,int));
	else if (f=='s')
		len += ft_str(va_arg(list,char *));
	return(len);
}

int		ft_char(char c)
{
	write(1,&c,1);
	return(1);
}

int		ft_str(char *string)
{
	int	len;
	int	x;

	len = 0;
	x = 0;
	if(!string)
	{
		write(1,"(null)",6);
		return(6);
	}
	while(string[x] != '\0')
	{
		len += ft_char(string[x]);
		x++;
	}
	return(len);
}

