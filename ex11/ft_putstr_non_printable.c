/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 20:32:19 by deb               #+#    #+#             */
/*   Updated: 2024/08/02 07:47:00 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

void	ft_putstr_non_printable(char *str)
{
	char *hexa_digits;

	hexa_digits = "0123456789abcdef";
	while (*str != '\0')
	{
		if ((*str >= 0) && (*str <= 31))
		{
			write(1, "\\", 1);
			write(1, &hexa_digits[(*str >> 4) & 0xF], 1);
			write(1, &hexa_digits[*str & 0xF], 1);
			str++;
		}
		write(1, str, 1);
		str++;
	}
}
