/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyang <hyyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 19:55:01 by hyyang            #+#    #+#             */
/*   Updated: 2021/01/24 20:11:13 by hyyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	sub = ft_calloc(len + 1, sizeof(char));
	if (sub == 0)
		return (0);
	if (start < ft_strlen(s))
		ft_strlcpy(sub, (char *)s + start, len + 1);
	return (sub);
}
