/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 23:34:34 by kycho             #+#    #+#             */
/*   Updated: 2020/02/27 00:18:22 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t idx;
	unsigned char ch;

	idx = 0;
	while (idx < n)
	{
		ch = ((unsigned char *)src)[idx];
		((unsigned char *)dst)[idx] = ch;
		if (ch == (unsigned char)c)
			return (dst + idx + 1);
		idx++;
	}
	return (0);
}
