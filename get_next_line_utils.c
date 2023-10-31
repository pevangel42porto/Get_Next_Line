/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:48:38 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/31 18:29:31 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c)
	{
		if(str[i] == '\0')
			return (NULL);
		i++;
	}
	return (str);
}

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *str_first, char *str_second)
{
	char	*str;
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!str_first)
		return (NULL);
	if (!str_second)
		return (str_first);
	str = (char *)malloc(ft_strlen(str_first) + ft_strlen(str_second) + 1);
	if (!str)
		return (NULL);
	while (str_first[i])
		str[i++] = str_first[j++];
	j = 0;
	while (str_second[j])
		str[i++] = str_second[j++];
	str[i] = '\0';
	free(str_first);
	free(str_second);
	return (str);
}
