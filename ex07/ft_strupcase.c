/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:50:18 by deb               #+#    #+#             */
/*   Updated: 2024/08/01 15:02:38 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../helper/helper.h"

char	*ft_strupcase(char *str);

int		is_lower(char c);

int	is_lower(char c)
{
	if ((c > 96) && (c < 123))
		return (1);
	else
		return (0);
}

char	*ft_strupcase(char *str)
{
	char *original;

	original = str;
	while (*str != '\0')
	{
		if (is_lower(*str))
		{
			*str = *str - 32;
		}
		str++;
	}
	return (original);
}
/*
int	main(void)
{
	char	str1[8];

	initialize_str(str1, "asd31\n");
	write(1, str1, 7);
	ft_strupcase(str1);
	write(1, str1, 7);
} */
