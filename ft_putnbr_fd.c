/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyyang <hyyang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 04:06:43 by hyyang            #+#    #+#             */
/*   Updated: 2021/01/31 01:04:39 by hyyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putdigit(unsigned int n, int fd)
{
	char	c;

	c = (n % 10) + '0';
	if (n >= 10)
		ft_putdigit(n / 10, fd);
	ft_putchar_fd(c, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	*nbr;

	if (fd < 0)
		return ;
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n < 0)
		ft_putchar_fd('-', fd);
	(n < 0) ? ft_putdigit(-n, fd) : ft_putdigit(n, fd);
	
	write(fd, nbr, ft_strlen(nbr));
}
