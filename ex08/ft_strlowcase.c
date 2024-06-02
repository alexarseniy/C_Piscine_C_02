/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:50:55 by olarseni          #+#    #+#             */
/*   Updated: 2024/05/31 04:40:21 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	char	*str_ptr;

	str_ptr = str;
	while (*str != '\0')
	{
		if (ft_is_upper(*str) == 1)
			*str = *str + ('a' - 'A');
		str++;
	}
	return (str_ptr);
}
/*
int	main(void)
{
	char str[] = "HOLA mUndO23";

	printf("%s\n", ft_strlowcase(str));
}*/
