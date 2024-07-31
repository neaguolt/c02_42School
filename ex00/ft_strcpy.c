/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 08:46:34 by deb               #+#    #+#             */
/*   Updated: 2024/07/30 12:20:24 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.h"

/*
strcpy()
stpcpy()
		These  functions  copy the string pointed to by src,
		into a string at the buffer pointed to by dst;
		The programmer is responsible for allocating
		a destination buffer large enough, that is, strlen(src) + 1.
		For the difference between the two functions, see RETURN VALUE.
		strcpy()
			function return dst.
 */
char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	it;

	it = 0;
	while (src[it])
	{
		dest[it] = src[it];
		it++;
	}
	dest[it] = src[it];
	return (dest);
}

int	main(void)
{
	char	*str1;
	char	str2[7];

	str1 = "Hello!";
	ft_strcpy(str2, str1);
	writestring(str2);
	return (0);
}
