/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 17:02:39 by deb               #+#    #+#             */
/*   Updated: 2024/08/01 19:55:40 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	it;
	unsigned int	src_size;

	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;

	if (size > 0)
	{
		it = 0;
		while ((src[it] != '\0') && (it < (size-1)))
		{
			dest[it] = src[it];
			it++;
		}
		dest[it] = '\0';
	}
	return (src_size);
}
