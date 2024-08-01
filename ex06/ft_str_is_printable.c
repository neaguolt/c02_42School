/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:38:35 by deb               #+#    #+#             */
/*   Updated: 2024/08/01 12:29:11 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	if (str)
	{
		if (str[0] == '\0')
		{
			return (1);
		}
		while (*str)
		{
			if ((*str < 32) || (*str > 126))
			{
				return (0);
			}
			str++;
		}
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	char	*str1;

	str1 = "ABC#$%asd123-";
	if (ft_str_is_printable(str1))
	{
		write(1, "String is_printable\n", 21);
	}
	else
	{
		write(1, "Other String\n", 13);
	}
} */
