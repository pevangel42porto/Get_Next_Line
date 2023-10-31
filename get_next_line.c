/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:48:41 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/30 16:00:36 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_line(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i] != '\n' && str )
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}

static int ft_new

char *get_next_line(int fd)
{
	
}