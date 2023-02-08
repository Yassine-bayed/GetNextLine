/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayed <ybayed@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:12:32 by ybayed            #+#    #+#             */
/*   Updated: 2023/02/08 15:49:36 by ybayed           ###   ########.fr       */
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

// int main()
// {
//     int fd;
//     char *line = "test";

//     fd = open("ddd", O_RDONLY);

//         line = get_next_line(fd);
//         printf("%s", line);
//     return (0);
// }