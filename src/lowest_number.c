/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lowest_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brclemen <brclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 21:52:55 by brclemen          #+#    #+#             */
/*   Updated: 2024/03/19 15:28:38 by brclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_lowest_content(t_stack **stack_a)
{
	t_stack	*search;
	int		content;

	search = (*stack_a);
	content = search->content;
	while (search && search->next)
	{
		if (content > search->next->content)
			content = search->next->content;
		search = search->next;
	}
	return (content);
}

int	ft_lowest_rotate(t_stack **stack_a)
{
	t_stack	*search;
	int		content;
	int		i;

	i = 0;
	search = (*stack_a);
	content = search->content;
	while (search && search->next)
	{
		if (content > search->next->content)
			content = search->next->content;
		search = search->next;
	}
	search = (*stack_a);
	while (search->content != content)
	{
		search = search->next;
		i++;
	}
	if (i > ft_lstsize_stack(search))
		return (1);
	else
		return (0);
}

int	ft_lowest_index(t_stack **stack_a)
{
	t_stack	*search;
	int		content;
	int		i;

	i = 0;
	search = (*stack_a);
	content = search->content;
	while (search && search->next)
	{
		if (content > search->next->content)
			content = search->next->content;
		search = search->next;
	}
	search = (*stack_a);
	while (search->content != content)
	{
		search = search->next;
		i++;
	}
	return (i);
}

int	ft_biggest_content(t_stack **stack_a)
{
	t_stack	*search;
	int		content;

	search = (*stack_a);
	content = search->content;
	while (search && search->next)
	{
		if (content < search->next->content)
			content = search->next->content;
		search = search->next;
	}
	return (content);
}
