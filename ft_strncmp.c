/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyang <hyyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 17:35:55 by hyyang            #+#    #+#             */
/*   Updated: 2021/01/24 17:43:19 by hyyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char *p1;
	char *p2;

	p1 = (char *)s1;
	p2 = (char *)s2;
	while (n--)
	{
		if (*p1 != *p2 || *p1 == 0 || *p2 == 0)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
