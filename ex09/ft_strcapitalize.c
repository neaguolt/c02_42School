/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:20:09 by deb               #+#    #+#             */
/*   Updated: 2024/08/01 17:00:43 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <helper.h>

//functions declarations

int		is_alpha(char c);

int		is_delimiter(char c);

void	upper_char(char *c);

void	lower_char(char *c);

char	*ft_strcapitalize(char *str);

//functions implementations

int	is_alpha(char c)
{
	unsigned char	islower_alpha;
	unsigned char	isupper_alpha;

	islower_alpha = (c > 96) && (c < 123);
	isupper_alpha = (c > 64) && (c < 91);
	return (islower_alpha || isupper_alpha);
}

int	is_delimiter(char c)
{
	char	*delimiters;
	int		it;

	delimiters = ",. ?!;+-";
	it = 0;
	while (delimiters[it] != '\0')
		if (c == delimiters[it++])
			return (1);
	return (0);
}

void	upper_char(char *c)
{
	unsigned char	islower_alpha;

	islower_alpha = (*c > 96) && (*c < 123);
	if (islower_alpha)
		*c = *c - 32;
}

void	lower_char(char *c)
{
	unsigned char	isupper_alpha;

	isupper_alpha = (*c > 64) && (*c < 91);
	if (isupper_alpha)
		*c = *c + 32;
}

char	*ft_strcapitalize(char *str)
{
	int		begin_word;
	char	*original;

	begin_word = 1;
	original = str;
	while (*str != '\0')
	{
		if (is_alpha(*str))
		{
			if (begin_word)
			{
				upper_char(str);
				begin_word = 0;
			}
			else
				lower_char(str);
		}
		else if (is_delimiter(*str))
			begin_word = 1;
		else
			begin_word = 0;
		str++;
	}
	return (original);
}
/*
int	main(void)
{
	char	str1[64];

	initialize_str(str1, "salut, comment tu vas
	? 42mots quarante-deux; cinquante+et+un\n");
	write(1, str1, 63);
	write(1, ft_strcapitalize(str1), 63);
	return (0);
} */
