/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 16:20:44 by kycho             #+#    #+#             */
/*   Updated: 2020/02/29 22:49:10 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	f(unsigned int i, char ch)
{
	return (ch - 'a' + 'A');
}

int	main(void)
{
	char *str = "abcdefg";
	char *res = ft_strmapi(str, f);
	printf("%s\n", res);

	return (0);
}
