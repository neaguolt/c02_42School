/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:33:34 by deb               #+#    #+#             */
/*   Updated: 2024/08/01 13:21:56 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//# include "helper.h"
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned char	it;
	unsigned char	dest_end;

	if (src)
	{
		it = 0;
		dest_end = 0;
		while (src[it] && it < n)
		{
			if (!dest[it])
				dest_end = it;
			dest[it] = src [it];
			it++;
		}
		if (dest_end < n)
			while ((it < n))
				dest[it++] = '\0';
		else
			dest[it] = '\0';
	}
	return (dest);
}
/*
int	main(void)
{
	char	*src;
	char	dest[10];

	src = "Hello!";
	write(1, ft_strncpy(dest, src, 3), 5);
} */
