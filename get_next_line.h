/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayed <ybayed@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:12:32 by ybayed            #+#    #+#             */
/*   Updated: 2023/03/22 18:45:22 by ybayed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <limits.h>

char	*get_next_line(int fd);
char	*storeinstaticbuffer(int fd, char *static_buffer);
char	*linefrombuffer(char *static_buffer);
char	*save_remnant(char *static_buffer);
char	*ft_strjoin(char *static_buffer, char *buffer);
size_t	ft_strlen(char *static_bufferer);
char	*ft_strchr(char *static_bufferer, int c);

#endif