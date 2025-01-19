/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:51:54 by mbenomar          #+#    #+#             */
/*   Updated: 2024/11/08 14:50:53 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char sep)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == sep)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != sep)
				i++;
		}
	}
	return (count);
}

static char	**free_lst(char **lst)
{
	int	i;

	i = 0;
	while (lst[i])
	{
		free(lst[i]);
		i++;
	}
	free(lst);
	return (NULL);
}

static size_t	word_length(const char *s1, char sep)
{
	size_t	len;

	len = 0;
	while (*s1 && *s1 != sep)
	{
		len++;
		s1++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	len_word;
	int		i;

	if (!s)
		return (NULL);
	strs = (char **) malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!strs)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			len_word = word_length(s, c);
			strs[i] = ft_substr(s, 0, len_word);
			if (!strs[i++])
				return (free_lst(strs));
			s += len_word;
		}
	}
	strs[i] = NULL;
	return (strs);
}

// int	main(void)
// {
// 	char	*string;
// 	char	**s;

// 	string = "      split       this for   me  !       ";
// 	s = ft_split(string, ' ');
// 	if (s == NULL)
// 	{
// 		printf("NULL\n");
// 	}
// 	else
// 	{
// 		for (size_t i = 0; s[i] != NULL; i++)
// 		{
// 			printf("-%s\n", s[i]);
// 		}
// 	}
// 	return (0);
// }
