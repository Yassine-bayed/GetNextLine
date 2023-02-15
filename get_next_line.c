/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayed <ybayed@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:12:32 by ybayed            #+#    #+#             */
/*   Updated: 2023/02/15 20:25:24 by ybayed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"
#include <unistd.h>

char *read_line(int fd, char *static_buffer)
{
	char	*buffer;
	int		size;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	size = 1;
	return (static_buffer);
}
char *fixed_line(char *static_buffer)
{
	int		i;
	char	*line;

	i = 0;
	if(!static_buffer)
		return (NULL);
	while(static_buffer[i] && static_buffer[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if(!line)
		return (NULL);
	i = 0;
	while(static_buffer[i] && static_buffer[i] != '\n')
	{
		line[i] = static_buffer[i];
		i++;
	}
	if(static_buffer[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}
char *next_line(char *static_buffer)
{
	int		i;
	int		j;
	char 	*tab;

	i = 0;
	while (static_buffer[i] && static_buffer != '\n')
		i++;
	if(!static_buffer)
	{
		free(static_buffer);
		return(NULL);
	}
	tab = (char *)malloc(sizeof(char) * (ft_strlen(static_buffer) - i + 1));
	if(!tab)
		return(NULL);
	i++;
	j = 0;
	while(static_buffer[i])
		tab[j++] = static_buffer[i++];
	tab[j] = '\0';
	free(static_buffer);
	return (tab);
}


char *get_next_line(int fd)
{
	char            *ln;
	static char     *static_buffer ;
    
    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    static_buffer = read_line(fd, static_buffer);
    if(!static_buffer)
        return (NULL);
    ln = fixed_line(static_buffer);
    static_buffer = next_line(static_buffer);
    return (ln);
}

// int main(int argc, char **argv)
// {
// 	int		fd;
// 	char	*line;

// 	if (argc == 2)
// 	{
// 		fd = open(argv[1], O_RDONLY);
// 		while (get_next_line(fd) > 0)
// 		{
// 			printf("%s", line);
// 			free(line);
// 		}
// 		close(fd);
// 	}
// 	return (0);
// }