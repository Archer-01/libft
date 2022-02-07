/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 13:24:02 by hhamza            #+#    #+#             */
/*   Updated: 2022/02/07 11:08:22 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_indexof(const char *str, char c)
{
	unsigned int	i;

	if (str == NULL)
		return (-1);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i);
		++i;
	}
	return (-1);
}

static char	*ft_save_remainder(char *line, char *remainder, ssize_t read_size)
{
	ssize_t	endl_index;
	char	*temp;

	if (line[0] == '\0' || read_size == -1)
	{
		free(line);
		return (NULL);
	}
	endl_index = ft_indexof(line, '\n');
	if (endl_index != -1)
	{
		ft_strlcpy(remainder, line + endl_index + 1, BUFFER_SIZE + 1);
		temp = line;
		line = (char *) malloc(sizeof(char) * (endl_index + 2));
		if (line == NULL)
			return (NULL);
		ft_strlcpy(line, temp, endl_index + 2);
		free(temp);
	}
	else
		remainder[0] = '\0';
	return (line);
}

/**
 * @brief Get the next line from a file
 *
 * @param fd: File descriptor
 * @return char*: Retreived line, NULL otherwise
 */
char	*get_next_line(int fd)
{
	static char	remainder[10240][BUFFER_SIZE + 1];
	char		buffer[BUFFER_SIZE + 1];
	char		*line;
	char		*temp;
	ssize_t		read_size;

	if (fd < 0 || fd >= 10240)
		return (NULL);
	line = ft_strdup(remainder[fd]);
	while (ft_indexof(line, '\n') == -1)
	{
		read_size = read(fd, buffer, BUFFER_SIZE);
		if (read_size <= 0)
			break ;
		buffer[read_size] = '\0';
		temp = line;
		line = ft_strjoin(line, buffer);
		free(temp);
	}
	line = ft_save_remainder(line, remainder[fd], read_size);
	return (line);
}
