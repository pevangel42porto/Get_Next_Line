/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:24:31 by pevangel          #+#    #+#             */
/*   Updated: 2023/11/06 12:45:31 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_size_buffer(int fd, char *str)
{
	char	*buffer;
	int		read_bytes;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	read_bytes = 1;
	while (!ft_strchr(str, '\n') && read_bytes > 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes < 0)
		{
			if (str)
				free(str);
			free(buffer);
			return (NULL);
		}
		buffer[read_bytes] = '\0';
		str = ft_strjoin(str, buffer);
	}
	free(buffer);
	return (str);
}

char	*ft_new_line(char *str)
{
	int		i;
	char	*join_str;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	join_str = malloc((i + 2) * sizeof(char));
	if (!join_str)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		join_str[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		join_str[i] = str[i];
		i++;
	}
	join_str[i] = '\0';
	return (join_str);
}

char	*ft_new_str(char *str)
{
	int		i;
	int		j;
	char	*join_str;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\0')
	{
		free(str);
		return (NULL);
	}
	join_str = malloc(ft_strlen(str) - i + 1 * sizeof(char));
	if (!join_str)
		return (NULL);
	i++;
	j = 0;
	while (str[i])
		join_str[j++] = str[i++];
	join_str[j] = '\0';
	free(str);
	return (join_str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*str;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	str = ft_size_buffer(fd, str);
	if (!str)
		return (NULL);
	line = ft_new_line(str);
	str = ft_new_str(str);
	return (line);
}
