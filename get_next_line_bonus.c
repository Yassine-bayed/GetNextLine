/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayed <ybayed@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 01:42:19 by ybayed            #+#    #+#             */
/*   Updated: 2023/03/25 02:00:17 by ybayed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*storeinstaticbuffer(int fd, char *static_buffer)
{
	char	*buffer;
	int		readed;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	readed = 1;
	while (!ft_strchr(static_buffer, '\n') && readed > 0)
	{
		readed = read(fd, buffer, BUFFER_SIZE);
		if (readed < 0)
		{
			free(static_buffer);
			free(buffer);
			return (NULL);
		}
		buffer[readed] = '\0';
		static_buffer = ft_strjoin(static_buffer, buffer);
	}
	free(buffer);
	return (static_buffer);
}

char	*linefrombuffer(char *static_buffer)
{
	int		i;
	char	*line;

	i = 0;
	if (!(*static_buffer))
		return (NULL);
	while (static_buffer[i] && static_buffer[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (static_buffer[i] && static_buffer[i] != '\n')
	{
		line[i] = static_buffer[i];
		i++;
	}
	if (static_buffer[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*save_remnant(char *static_buffer)
{
	int		i;
	int		j;
	char	*remnant;

	i = 0;
	while (static_buffer[i] && static_buffer[i] != '\n')
		i++;
	if (!*(static_buffer + i))
	{
		free(static_buffer);
		return (NULL);
	}
	remnant = (char *)malloc(sizeof(char) * (ft_strlen(static_buffer) - i + 1));
	if (!remnant)
		return (NULL);
	i++;
	j = 0;
	while (static_buffer[i])
		remnant[j++] = static_buffer[i++];
	remnant[j] = '\0';
	free(static_buffer);
	return (remnant);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*static_buffer[OPEN_MAX];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	static_buffer[fd] = storeinstaticbuffer(fd, static_buffer[fd]);
	if (!static_buffer[fd])
		return (NULL);
	line = linefrombuffer(static_buffer[fd]);
	static_buffer[fd] = save_remnant(static_buffer[fd]);
	return (line);
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