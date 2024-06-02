/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 23:56:52 by olarseni          #+#    #+#             */
/*   Updated: 2024/06/01 12:07:02 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(char c)
{
	write(1, "\\", 1);
	write(1, &"0123456789abcdef"[c / 16], 1);
	write(1, &"0123456789abcdef"[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str > 31 && *str < 127)
			write(1, str, 1);
		else
			ft_print_hex(*str);
		str++;
	}
}
/*
int	main(void)
{
	char *str = "Hola\nmundo";
	ft_putstr_non_printable(str);
}*/
