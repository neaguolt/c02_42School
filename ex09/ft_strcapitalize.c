/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:17:10 by deb               #+#    #+#             */
/*   Updated: 2024/08/01 15:16:04 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str);

int		is_upper(char c);

int		is_lower(char c);

int		is_delimitator(char c);

int	is_upper(char c)
{
	if ((c > 64) && (c < 91))
		return (1);
	return (0);
}

int	is_lower(char c)
{
	if ((c > 96) && (c < 123))
		return (1);
	return (0);
}

void initialize_str(char *str, const char *initial)
{
	while (*initial != '\0')
	{
		*str = *initial;
		str++;
		initial++;
	}
	*str = '\0';  // Null terminator
}

int	is_delimitator(char c)
{
	char	separator[12];
	int		it;

	it = 0;
	initialize_str(separator, ",;:! \"?-+.");
	while (separator[it] != '\0')
		if (c == separator[it++])
			return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*original;
	int		word;

	original = str;
	word = 0;
	while (*str != '\0')
	{
		if (!word && is_lower(*str))
		{
			*str = *str - 32;
			word = 1;
		}
		else if (word && is_upper(*str))
		{
			*str = *str + 32;
		}
		else if (is_delimitator(*str))
		{
			word = 0;
		}
		else
			word = 1;
		str++;
	}
	return (original);
}
/*
int	main(void)
{
	char	str1[64];

	initialize_str(str1, "salut, comment tu vas ?
	42mots quarante-deux; cinquante+et+un\n");
	write(1, str1, 63);
	write(1, ft_strcapitalize(str1), 63);
	return (0);
} */
