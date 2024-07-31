/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:03:20 by deb               #+#    #+#             */
/*   Updated: 2024/07/31 16:14:47 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <helper.h>

char	*ft_strlowcase(char *str);

int		is_upper(char c);

int	is_upper(char c)
{
	if ((c > 64) && (c < 91))
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	char	*original;

	original = str;
	while (*str != '\0')
	{
		if (is_upper(*str))
			*str = *str + 32;
		str++;
	}
	return (original);
}

int	main(void)
{
	char	str1[8];

	initialize_str(str1, "aSd31\n");
	write(1, str1, 7);
	ft_strlowcase(str1);
	write(1, str1, 7);
}
