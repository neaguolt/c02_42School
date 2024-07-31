/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:04:43 by deb               #+#    #+#             */
/*   Updated: 2024/07/31 11:10:09 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	unsigned int	it;
	unsigned char	issmalpha;

	if (str)
	{
		if (str[0] == '\0')
		{
			return (1);
		}
		it = 0;
		while (str[it])
		{
			issmalpha = ((str[it] > 96) && (str[it] < 123));
			if (!issmalpha)
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

	str1 = "abc";
	if (ft_str_is_lowercase(str1))
	{
		write(1, "String is_lowercase\n", 21);
	}
	else
	{
		write(1, "Other String\n", 13);
	}
} */
