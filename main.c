/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:07:14 by kycho             #+#    #+#             */
/*   Updated: 2020/02/29 03:02:32 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int		main(void)
{	
	char *s1 = "hello world";
	char *ptr1 = strdup(s1);
	char *ptr2 = ft_strdup(s1);

	printf("%p\n", s1);
	printf("%p\n", ptr1);
	printf("%p\n", ptr2);

	printf("=========================\n");
	printf("%s\n", ptr1);
	printf("%s\n", ptr2);
	return (0);
}
