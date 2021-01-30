/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyang <hyyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 23:33:39 by hyyang            #+#    #+#             */
/*   Updated: 2021/01/30 16:44:15 by hyyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static size_t	ft_wordlen(char const *s, size_t *j, char c)
{
	size_t	len;

	len = 0;
	while (s[*j] == c)
		(*j)++;
	while (s[*j + len] != c && s[*j + len] != '\0')
		len++;
	return (len);
}

char			**ft_split(char const *s, char c)
{
	char		**strs;
	size_t		count;
	size_t		wordlen;
	size_t		i;
	size_t		j;

	if (!s)
		return (0);
	count = (ft_count_words(s, c));
	if (!(strs = (char **)malloc((count + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	while (i < count)
	{
		wordlen = ft_wordlen(s, &j, c);
		if (!(strs[i] = (char *)malloc((wordlen + 1) * sizeof(char))))
			strs[i] = 0;
		ft_strlcpy(strs[i], &s[j], wordlen + 1);
		j += wordlen;
		i++;
	}
	strs[i] = 0;
	return (strs);
}
