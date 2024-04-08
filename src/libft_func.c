/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brclemen <brclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:31:21 by brclemen          #+#    #+#             */
/*   Updated: 2024/03/22 09:30:41 by brclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*ft_lstnew_stack(int content)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_back_stack(t_stack **lst, t_stack *new)
{
	t_stack	*current;

	if (*lst == NULL)
		*lst = new;
	else
	{
		current = *lst;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
}

void	ft_lstadd_front_stack(t_stack **lst, t_stack *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

void	print_stack(t_stack *stack)
{
	while (stack != NULL)
	{
		ft_printf("Nombre : %d a l'index %d \n", stack->content, stack->index);
		stack = stack->next;
	}
}

int	ft_lstsize_stack(t_stack *lst)
{
	int	index;

	index = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
		index++;
	}
	return (index);
}
