/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busmanov <busmanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 21:15:59 by busmanov          #+#    #+#             */
/*   Updated: 2022/10/31 03:37:24 by busmanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list list, char f)
{
	int	len;

	len = 0;
	if (f == 'c')
		len += ft_char(va_arg(list,int));
	else if (f == 's')
		len += ft_str(va_arg(list,char *));
	else if (f == 'i' || f == 'd')
		len += ft_putnbr(va_arg(list,int));
	else if (f == 'u')
		len = len + ft_unsigned(va_arg(list,int));
	else if ( f == 'x' || f == 'X')
		len = len + ft_hex(va_arg(list,unsigned int),f);
	else if (f == 'p')
		len = len + ft_pri_ptr(va_arg(list,unsigned long));
	else if ( f == '%')
		len = len + ft_char('%');
	else
		len = len + ft_char(f);
	return(len);
}

int		ft_char(char c)
{
	write(1,&c,1);
	return (1);
}

int		ft_str(char *string)
{
	int	len;
	int	x;

	len = 0;
	x	= 0;
	if (!string)
	{
		write(1,"(null)",6);
		return (6);
	}
	while (string[x] != '\0')
	{
		len += ft_char(string[x]);
		x++;
	}
	return (len);
}

int		ft_putnbr(int n)
{
	int len;

	len = 0;
	if (n == -2147483648)
	{
		len = len + write(1, "-2147483648",11);
		return (len);
	}
	if (n < 0)
	{
		len = len + ft_char('-');
		n = -n;
	}
	if (n > 9)
//we begin to break down the number recursively to 
//each individual digit, where we will then convert it into
// a character. so we will going to use a division by 10 and a modulus by 10.
	{//The division by 10 will take us further 
	//into the recursion until we finaly reach the very first number in our int.
		len = len + ft_putnbr(n / 10);
		len = len + ft_putnbr(n % 10);
	}//
	else//'0' = 48 in ASCII. 
		len = len + ft_char(n + 48);
	return(len);
}

int		ft_unsigned(unsigned int nb)
{
	int len;

	len = 0;
	if (nb > 9)
	{
		len = len + ft_unsigned(nb / 10);
		len = len + ft_unsigned(nb % 10);
	}
	else
	{ //convert the num nb into char value
		len = len + ft_char(nb + 48);
	}
	return (len);
}

int ft_hex(unsigned int nb,const char spot)
{
	int len;

	len = 0;
	if (nb >= 16)//f is at 15
	{
		len = len + ft_hex(nb / 16, spot);
		len = len + ft_hex(nb % 16, spot);
	}
	else if (nb <= 9)
	{
		len = len + ft_char(nb + '0');
	}
	else if (nb > 9 && nb < 16)
	{
		if (spot == 'x')
		{
			len = len + ft_char(nb - 10 + 'a' );
		}
		if (spot  == 'X')
		{
			len = len + ft_char(nb - 10 + 'A');
		}
	}
	return (len);
}
