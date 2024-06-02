/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olarseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:24:10 by olarseni          #+#    #+#             */
/*   Updated: 2024/06/01 12:09:03 by olarseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		str++;
	if (*str == '\0')
		return (1);
	return (0);
}