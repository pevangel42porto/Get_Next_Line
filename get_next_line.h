/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevangel < pevangel@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:48:47 by pevangel          #+#    #+#             */
/*   Updated: 2023/10/31 18:31:55 by pevangel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

char 				*get_next_line(int fd);
char				*ft_strjoin(char *dest, char *src);
char				*ft_strchr(char *str, char c);
size_t				ft_strlen(char *str);
char				*ft_strjoin(char *str_first, char *str_second);

#endif