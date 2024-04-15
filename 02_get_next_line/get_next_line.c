/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:29:49 by abigamas          #+#    #+#             */
/*   Updated: 2024/03/11 19:32:37 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_archive(char *line_readed, int fd)
{
	char	*buffer;
	char	*aux;
	int		number_bytes;

	buffer = (char *)ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	number_bytes = 1;
	while (!ft_strchr(line_readed, '\n') && number_bytes)
	{
		number_bytes = read(fd, buffer, BUFFER_SIZE);
		if (number_bytes < 0)
			return (free(buffer), free(line_readed), NULL);
		if (number_bytes == 0)
			return (free(buffer), line_readed);
		buffer[number_bytes] = '\0';
		aux = line_readed;
		line_readed = ft_strjoin(line_readed, buffer);
		free(aux);
	}
	return (free(buffer), buffer = NULL, line_readed);
}

char	*create_line(char *line_readed)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	if (!line_readed)
		return (NULL);
	while (line_readed[i] && line_readed[i] != '\n')
		i++;
	if (line_readed[i] == '\n')
		i++;
	result = (char *)ft_calloc(i + 1, sizeof(char));
	if (!result)
		return (NULL);
	j = 0;
	while (j < i)
	{
		result[j] = line_readed[j];
		j++;
	}
	return (result);
}

char	*reload_line_readed(char *line_readed)
{
	int		size;
	int		i;
	int		final_size;
	char	*result;
	int		j;

	if (!line_readed)
		return (NULL);
	size = ft_strlen(line_readed);
	i = 0;
	while (line_readed[i] && line_readed[i] != '\n')
		i++;
	final_size = size - i;
	if (!final_size)
		return (free(line_readed), line_readed = NULL, NULL);
	result = (char *)ft_calloc(final_size, sizeof(char));
	if (!result)
		return (free(line_readed), line_readed = NULL, NULL);
	j = 0;
	while (j < final_size)
		result[j++] = line_readed[++i];
	return (free(line_readed), line_readed = NULL, result);
}

char	*get_next_line(int fd)
{
	static char	*line_readed;
	char		*final_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line_readed = read_archive(line_readed, fd);
	if (!line_readed)
		return (line_readed = NULL, NULL);
	if (!line_readed[0])
		return (free(line_readed), line_readed = NULL, NULL);
	final_line = create_line(line_readed);
	if (!final_line)
		return (free(line_readed), line_readed = NULL, NULL);
	line_readed = reload_line_readed(line_readed);
	return (final_line);
}
