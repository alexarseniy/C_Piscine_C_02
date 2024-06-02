/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:56:47 by olarseni          #+#    #+#             */
/*   Updated: 2024/06/01 12:09:43 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_lower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= '0' && c <= '9')
		return (2);
	return (0);
}

int	ft_is_alphanum(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		flag;
	char	*str_ptr;

	flag = 0;
	str_ptr = str;
	while (*str != '\0')
	{
		if (ft_is_alphanum(*str) == 1 && flag == 0)
		{
			flag = 1;
			if (ft_is_lower(*str) == 1)
				*str = *str - ('a' - 'A');
		}
		else if (ft_is_alphanum(*str) == 1 && flag == 1)
		{
			if (ft_is_lower(*str) == 0)
				*str = *str + ('a' - 'A');
		}
		else
			flag = 0;
		str++;
	}
	return (str_ptr);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	printf("%s", ft_strcapitalize(*(argv + 1)));
	return (0);
}*/
