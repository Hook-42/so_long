/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceatgie <ceatgie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:21:22 by ceatgie           #+#    #+#             */
/*   Updated: 2022/01/31 09:29:32 by ceatgie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *backup_str, char *buffer)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!backup_str)
	{
		backup_str = malloc(sizeof(char) * 1);
		backup_str[0] = '\0';
	}
	if (!backup_str || !buffer)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(backup_str)
					+ ft_strlen(buffer)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (backup_str)
		while (backup_str[++i] != '\0')
			str[i] = backup_str[i];
	while (buffer[j] != '\0')
		str[i++] = buffer[j++];
	str[ft_strlen(backup_str) + ft_strlen(buffer)] = '\0';
	free(backup_str);
	return (str);
}
