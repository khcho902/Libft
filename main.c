/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kycho <kycho@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 16:20:44 by kycho             #+#    #+#             */
/*   Updated: 2020/03/03 00:05:40 by kycho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	del(void *content)
{
	printf("delete   %s\n", (char *)content);
}

int	main(void)
{
	t_list **lst = (t_list **)malloc(sizeof(t_list *));
	
	char *str = "hahah";

	t_list *new1 = ft_lstnew("hello world");
	t_list *new2 = ft_lstnew("hellohelloworldwhrod");
	t_list *new3 = ft_lstnew(str);

	ft_lstadd_back(lst, new1);
	ft_lstadd_back(lst, new2);
	ft_lstadd_back(lst, new3);
	
	ft_lstclear(lst, NULL);


	printf("%s\n", (char *)new1->content);
	printf("%s\n", (char *)new2->content);
	printf("%s\n", (char *)new3->content);
	
	printf("%s\n", str);

	return (0);
}
