/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayed <ybayed@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 01:42:28 by ybayed            #+#    #+#             */
/*   Updated: 2023/03/25 01:59:41 by ybayed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*norminette_25(char *static_buffer)
{
	static_buffer = (char *)malloc(1 * sizeof(char));
	static_buffer[0] = '\0';
	return (static_buffer);
}

char	*ft_strjoin(char *static_buffer, char *buffer)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*str;

	i = -1;
	j = 0;
	if (!static_buffer)
		static_buffer = norminette_25(static_buffer);
	if (!static_buffer || !buffer)
		return (NULL);
	len = (ft_strlen(static_buffer) + ft_strlen(buffer)) + 1;
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	if (static_buffer)
		while (static_buffer[++i] != '\0')
			str[i] = static_buffer[i];
	while (buffer[j] != '\0')
		str[i++] = buffer[j++];
	str[ft_strlen(static_buffer) + ft_strlen(buffer)] = '\0';
	free(static_buffer);
	return (str);
}

size_t	ft_strlen(char *static_buffer)
{
	size_t	i;

	if (!static_buffer)
		return (0);
	i = 0;
	while (static_buffer[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *static_buffer, int n)
{
	int	i;

	i = 0;
	if (!static_buffer)
		return (0);
	if (n == '\0')
		return ((char *)&static_buffer[ft_strlen(static_buffer)]);
	while (static_buffer[i] != '\0')
	{
		if (static_buffer[i] == (char) n)
			return ((char *)&static_buffer[i]);
		i++;
	}
	return (0);
}
