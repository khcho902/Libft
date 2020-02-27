/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:07:14 by kycho             #+#    #+#             */
/*   Updated: 2020/02/28 00:59:27 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <bsd/string.h>

int		main(void)
{
	char dst[20];
	char src[20] = {"hello world"};

	strlcpy(dst, src, 10);

	printf("%s\n", dst);
	return (0);
}
