/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 17:41:42 by kycho             #+#    #+#             */
/*   Updated: 2020/02/29 19:01:11 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_char_set(char c, char const *set)
{
	size_t idx;

	idx = 0;
	while (set[idx])
	{
		if (set[idx] == c)
			return (1);
		idx++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimed_str;
	size_t	trimed_len;
	size_t	start_idx;
	size_t	end_idx;

	trimed_len = 0;
	start_idx = 0;
	end_idx = ft_strlen(s1) - 1;
	while (is_in_char_set(s1[start_idx], set) && s1[start_idx] != '\0')
		start_idx++;
	if (s1[start_idx] != '\0')
	{
		while (is_in_char_set(s1[end_idx], set))
			end_idx--;
		trimed_len = end_idx - start_idx + 1;
	}
	trimed_str = (char *)malloc(sizeof(char)*(trimed_len + 1));
	if (trimed_str == NULL)
		return (NULL);
	ft_strlcpy(trimed_str, s1 + start_idx, trimed_len + 1);
	return (trimed_str);
}
