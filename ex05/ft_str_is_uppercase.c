/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:13:11 by deb               #+#    #+#             */
/*   Updated: 2024/07/31 11:16:56 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	unsigned int	it;
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
			isbigalpha = ((str[it] > 64) && (str[it] < 91));
			if (!isbigalpha)
			{
				return (0);
			}
			it++;
		}
		return (1);
	}
	return (0);
}

int	main(void)
{
	char	*str1;

	str1 = "ABC";
	if (ft_str_is_uppercase(str1))
	{
		write(1, "String is_uppercase\n", 21);
	}
	else
	{
		write(1, "Other String\n", 13);
	}
}
