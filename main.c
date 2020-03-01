/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 16:20:44 by kycho             #+#    #+#             */
/*   Updated: 2020/03/01 19:51:47 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int argc, char ** argv)
{

	int fd;
	char *filename;


	if (argc != 2)
	{
		printf("error ");
		return (0);
	}



	filename = argv[1];
	fd = open(filename, O_WRONLY);
	if (fd < 0)
		printf("file not found");

	ft_putnbr_fd(0, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(1, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(-1, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(12345, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(-12345, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(2147483647, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(-2147483648, fd);
	write(fd, "\n", 1);

	close(fd);
	return (0);
}
