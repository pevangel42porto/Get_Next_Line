/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:25:10 by pevangel          #+#    #+#             */
/*   Updated: 2023/11/06 12:37:57 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_strchr(char *str, char c) 
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1); 
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *str, char *buffer)
{
	char	*str_join;
	size_t	size;
	int		i;
	int		j;
	
	size = ft_strlen(str) + ft_strlen(buffer);
	str_join = malloc((size + 1) * sizeof(char));
	if (!str_join)
		return (NULL);
	i = 0;
	while (str && str[i])
	{
		str_join[i] = str[i];
		i++;
	}
	j = 0;
	while (buffer && buffer[j])
		str_join[i++] = buffer[j++];
	str_join[i] = '\0';
	free(str);
	return (str_join);
}

