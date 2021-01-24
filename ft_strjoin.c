/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyang <hyyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 20:02:22 by hyyang            #+#    #+#             */
/*   Updated: 2021/01/24 20:08:27 by hyyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;

	str = ft_calloc(s1_len + s2_len + 1, sizeof(char));
	if (str == 0)
		return (0);
	ft_strlcpy(str, s1, s1_len);
	ft_strlcat(str, s2, s2_len);
	return (str);
}
