/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyang <hyyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 07:34:54 by hyyang            #+#    #+#             */
/*   Updated: 2021/01/24 07:39:08 by hyyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *p1;
	unsigned char *p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (--n)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (*p1 = *p2);
}
