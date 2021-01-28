/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyang <hyyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 23:33:39 by hyyang            #+#    #+#             */
/*   Updated: 2021/01/28 22:41:25 by hyyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
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

static int	ft_wordlen(char const *s, char c)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

char		**ft_split(char const *s, char c)
{
	char	**strs;
	int		count;
	int		wordlen;
	int		i;
	int		j;

	if (!s)
		return (0);
	count = (ft_count_words(s, c) + 1);
	if (!(strs = (char **)malloc(count * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	while (i < count)
	{
		wordlen = ft_wordlen(s, c) + 1;
		if (!(strs[i] = (char *)malloc(wordlen * sizeof(char))))
			strs[i] = 0;
		while (s[j] == c)
			j++;
		ft_strlcpy(strs[i], s[j], wordlen);
		i++;
	}
	*strs = 0;
	return (strs);
}
