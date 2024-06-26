/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subject_funcs02.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brclemen <brclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:31:19 by brclemen          #+#    #+#             */
/*   Updated: 2024/03/22 09:31:54 by brclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_rotate_a(t_stack **stack_a)
{
	t_stack	*tmp;

	tmp = (*stack_a);
	(*stack_a) = (*stack_a)->next;
	ft_lstadd_back_stack(stack_a, tmp);
	tmp->next = NULL;
	ft_lstadd_back_stack(stack_a, tmp->next);
	ft_printf("ra\n");
}

void	ft_rotate_b(t_stack **stack_b)
{
	t_stack	*tmp;

	tmp = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	ft_lstadd_back_stack(stack_b, tmp);
	tmp->next = NULL;
	ft_lstadd_back_stack(stack_b, tmp->next);
	ft_printf("rb\n");
}

void	ft_rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = (*stack_a);
	(*stack_a) = (*stack_a)->next;
	ft_lstadd_back_stack(stack_a, tmp);
	tmp->next = NULL;
	ft_lstadd_back_stack(stack_a, tmp->next);
	tmp2 = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	ft_lstadd_back_stack(stack_b, tmp2);
	tmp2->next = NULL;
	ft_lstadd_back_stack(stack_b, tmp2->next);
	ft_printf("rr\n");
}

void	ft_reverse_rotate_a(t_stack **stack_a)
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
	ft_printf("rra\n");
}

void	ft_reverse_rotate_b(t_stack **stack_b)
{
	t_stack	*last;
	t_stack	*before_last;
	t_stack	*tmp;

	tmp = (*stack_b);
	last = (*stack_b);
	before_last = (*stack_b);
	ft_lstlast_stack(&last);
	ft_lstbeforelast_stack(&before_last);
	(*stack_b) = last;
	(*stack_b)->next = tmp;
	before_last->next = NULL;
	ft_printf("rrb\n");
}
