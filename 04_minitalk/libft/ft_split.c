/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abigamas <abigamas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 05:10:39 by abigamas          #+#    #+#             */
/*   Updated: 2023/10/25 16:25:52 by abigamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//function splits a string into an array of substrings based 
//on a delimiter character.

static size_t	count_words(const char *str, char c)
{
	size_t	i;
	size_t	find_word;

	i = 0;
	find_word = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		while (str[i] != c && str[i] != '\0')
		{
			i++;
			if (str[i] == c || str[i] == '\0')
				find_word++;
		}
	}
	return (find_word);
}

static char	**free_box(int i, char **box)
{
	while (i >= 0)
	{
		free(box[i--]);
	}
	free(box);
	return (NULL);
}

static char	**fill_my_box(const char *s, char c, char **array)
{
	int	i;
	int	start;
	int	position;

	i = 0;
	position = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			if (s[i] == c || s[i] == '\0')
			{
				array[position] = ft_substr(s, start, i - start);
				if (!array[position])
					return (free_box(position, array));
				position++;
			}
		}
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**box;

	words = count_words(s, c);
	box = (char **)ft_calloc((words + 1), sizeof(char *));
	if (!box)
		return (NULL);
	return (fill_my_box(s, c, box));
}
