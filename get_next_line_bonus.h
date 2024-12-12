/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 14:37:28 by anschmit          #+#    #+#             */
/*   Updated: 2024/06/17 15:43:16 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

char	*get_next_line(int fd);
char	*ft_read(int fd, char *str);
char	*ft_strjoin(char *str, char *buffer);
size_t	ft_strlen(char *str);
char	*ft_strchr(char *str, int c);
char	*ft_getline(char *full_str);
char	*ft_getrest(char *full_str);

#endif