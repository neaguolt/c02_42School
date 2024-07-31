/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 09:33:48 by deb               #+#    #+#             */
/*   Updated: 2024/07/31 10:42:16 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int				it;
	unsigned char	isalpha;
	unsigned char	isbigalpha;

	if (str)
	{
		if (str[0] == '\0')
		{
			return (1);
		}
		it = 0;
		while (str[it])
		{
			isalpha = ((str[it] > 96) && (str[it] < 123));
			isbigalpha = ((str[it] > 64) && (str[it] < 91));
			if (!(isalpha || isbigalpha))
			{
				return (0);
			}
			it++;
		}
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	char	*str1;

	str1 = "maicamaIca";
	if (ft_str_is_alpha(str1))
	{
		write(1, "String alpha!\n", 14);
	}
	else
	{
		write(1, "Other String\n", 13);
	}
} */
