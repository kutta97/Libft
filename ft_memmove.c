/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyang <hyyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 01:56:10 by hyyang            #+#    #+#             */
/*   Updated: 2021/01/24 03:25:44 by hyyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (dst == src || len == 0)
		return (dst);
	d = (unsigned char *)dst + ((dst < src) ? 0 : len);
	s = (unsigned char *)src + ((dst < src) ? 0 : len);
	if (dst < src)
	{
		while (len--)
			ft_memcpy(d++, s++, 1);
	}
	else
	{
		while (len--)
			ft_memcpy(--d, --s, 1);
	}
	return (dst);
}
