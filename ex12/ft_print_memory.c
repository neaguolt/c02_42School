/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 08:11:43 by deb               #+#    #+#             */
/*   Updated: 2024/08/04 18:49:02 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size);

void	write_hexa(void *addr);

void	write_hexa_c(void *addr, unsigned int size);

void	write_ch(void *addr, unsigned int size)
{
	unsigned char	ch;
	unsigned int	it;

	it = 0;
	while (it < size)
	{
		write(1, " ", 1);
		ch = *(unsigned char *)(addr + it++);
		if (ch < 32)
			write(1, ".", 1);
		else
			write(1, &ch, 1);
	}
}

void	write_hexa_c(void *addr, unsigned int size)
{
	unsigned char	ch;
	int				it2;
	unsigned int	it;
	char			buffer[6];
	char			*hexa_digit;

	it = 0;
	buffer[5] = '\0';
	buffer[0] = ' ';
	hexa_digit = "0123456789abcdef";
	while (it < size)
	{
		it2 = 1;
		while ((it2 < 5) && (it < size))
		{
			ch = *(unsigned char *)(addr + it++);
			buffer[it2++] = hexa_digit[ch >> 4 & 0xf];
			buffer[it2++] = hexa_digit[ch & 0xf];
		}
		if ((it2 == 3) && !(it < size))
			write(1, buffer, 3);
		else
			write(1, buffer, 5);
	}
}

void	write_hexa(void *addr)
{
	unsigned long	address;
	char			buffer[17];
	char			*hexa_digit;
	int				it;

	address = (unsigned long)addr;
	buffer[16] = '\0';
	hexa_digit = "0123456789abcdef";
	it = 0;
	while (it < 16)
		buffer[it++] = '0';
	while (address > 0)
	{
		buffer[--it] = hexa_digit[address & 0xf];
		address = (address >> 4);
	}
	write(1, buffer, 16);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	it;

	if (size == 0)
		return (addr);
	it = 0;
	while (it < size / 16)
	{
		write_hexa(addr + (16 * it));
		write_hexa_c(addr + (16 * it), 16);
		write_ch(addr + (16 * it), 16);
		write(1, "\n", 1);
		it++;
	}
	if (size % 16)
	{
		write_hexa(addr + (16 * it));
		write_hexa_c(addr + (16 * it), (size % 16));
		write_ch(addr + (16 * it), (size % 16));
	}
	return (addr);
}
/*
int	main(void)
{
	char	*str1;

	str1 = "Maica\n!";
	ft_print_memory((void *)str1, 17);
	return (0);
} */
