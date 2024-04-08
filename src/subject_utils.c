/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subject_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brclemen <brclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:16:45 by brclemen          #+#    #+#             */
/*   Updated: 2024/03/22 09:31:57 by brclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_lstlast_stack(t_stack **lst)
{
	while (lst && (*lst)->next)
		(*lst) = (*lst)->next;
}

void	ft_lstbeforelast_stack(t_stack **lst)
{
	while (lst && (*lst)->next->next)
		(*lst) = (*lst)->next;
}

void	ft_reverse_rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*last;
	t_stack	*before_last;
	t_stack	*tmp;

	tmp = (*stack_a);
	last = (*stack_a);
	before_last = (*stack_a);
	ft_lstlast_stack(&last);
	ft_lstbeforelast_stack(&before_last);
	(*stack_a) = last;
	(*stack_a)->next = tmp;
	before_last->next = NULL;
	last = NULL;
	before_last = NULL;
	tmp = NULL;
	tmp = (*stack_b);
	last = (*stack_b);
	before_last = (*stack_b);
	ft_lstlast_stack(&last);
	ft_lstbeforelast_stack(&before_last);
	(*stack_b) = last;
	(*stack_b)->next = tmp;
	before_last->next = NULL;
	ft_printf("rrr\n");
}

long	ft_atoi_push(const char *nptr)
{
	long	resultat;
	int		index;
	int		sign;

	index = 0;
	resultat = 0;
	sign = 1;
	while (nptr[index] == ' ' || (nptr[index] >= '\t' && nptr[index] <= '\r'))
		index++;
	if (nptr[index] == '-')
	{
		sign = -1;
		index++;
	}
	else if (nptr[index] == '+')
		index++;
	while (nptr[index] != '\0')
	{
		if (nptr[index] >= '0' && nptr[index] <= '9')
			resultat = resultat * 10 + nptr[index] - '0';
		else
			break ;
		index++;
	}
	return (sign * resultat);
}

void	ft_lstclear_stack(t_stack **lst)
{
	t_stack	*current;

	if (!lst)
		return ;
	while (*lst)
	{
		current = (*lst)->next;
		(*lst)->content = 0;
		free(*lst);
		*lst = current;
	}
}
