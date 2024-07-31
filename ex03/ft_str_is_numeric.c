/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:44:22 by deb               #+#    #+#             */
/*   Updated: 2024/07/31 11:02:01 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	unsigned int	it;
	unsigned char	isnumber;

	if (str)
	{
		if (str[0] == '\0')
		{
			return (1);
		}
		it = 0;
		while (str[it])
		{
			isnumber = (str[it] > 47) && (str[it] < 58);
			if (!isnumber)
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

	str1 = "0123";
	if (ft_str_is_numeric(str1))
	{
		write(1, "String is_numeric!\n", 18);
	}
	else
	{
		write(1, "Other String\n", 13);
	}
} */
