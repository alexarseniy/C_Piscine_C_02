/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:45:05 by olarseni          #+#    #+#             */
/*   Updated: 2024/10/31 23:46:00 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	char	*str_ptr;

	str_ptr = str;
	while (*str != '\0')
	{
		if (ft_is_lower(*str) == 1)
			*str = *str - 'a' + 'A';
		str++;
	}
	return (str_ptr);
}
/*
int	main(int argc, char **argv)
{
	char str[] = "HOla mundo";
	printf("%s\n", ft_strupcase(str));
}*/
