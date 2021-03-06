/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 16:48:20 by kycho             #+#    #+#             */
/*   Updated: 2020/04/06 14:05:25 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	joined_len;

	joined_len = ft_strlen(s1) + ft_strlen(s2);
	joined_str = (char *)ft_calloc(joined_len + 1, sizeof(char));
	if (joined_str == NULL)
		return (NULL);
	ft_strlcat(joined_str, s1, joined_len + 1);
	ft_strlcat(joined_str, s2, joined_len + 1);
	return (joined_str);
}
