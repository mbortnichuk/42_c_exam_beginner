/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:38:54 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/19 12:40:21 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list_size.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int i;

	i = 0;
	list = begin_list;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}

int main()
{
	t_list *head = NULL;
	head = malloc(sizeof(t_list));
	if (head == NULL)
		return (1);
	head->data = 1;
	head->next = malloc(sizeof(t_list));
	head->next->data = 2;
	head->next->next = NULL;
	t_list *curr = head;
	while (curr != NULL)
	{
		//printf("%d\n", curr->data);
		printf("%d\n", ft_list_size(curr));
		curr = curr->next;
	}
	return (0);
}
