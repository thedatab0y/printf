/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busmanov <busmanov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 18:42:15 by busmanov          #+#    #+#             */
/*   Updated: 2022/10/30 12:06:30 by busmanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//return num of chars printed(the /0 is not included)/length of the printed string
//returns num of bytes written
//the first argument is a string of placeholders in some sequence, like d or u
//knowing how many placeholders are there is sth good and i can go through it based on that one at a time
//for that, i need strlen
//What is this ...? It’s a special token which marks the function as variadic, meaning that call sites can
// pass an arbitrary list of values following the named parameters.
int	ft_printf(const char *placeholders, ...)
{
	int		len;
	int		x;
	va_list list;

	len = 0;
	x 	= 0;
	va_start(list,placeholders);
	while(placeholders[x] != '\0')
	{
		if(placeholders[x] == '%')
		{
			len = len + ft_format(list ,placeholders[x + 1]);
			x++;
		}
		else
			len = len + write(1,&placeholders[x],1);
		x++;
	}
	va_end(list);
	return(len);
}
