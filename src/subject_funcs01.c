/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subject_funcs01.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brclemen <brclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:34:50 by brclemen          #+#    #+#             */
/*   Updated: 2024/03/14 02:08:54 by brclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_swap_a(t_stack **stack_a)
{
	int	tmp;

	if (!(*stack_a)->content || !(*stack_a)->next->content)
		return ;
	tmp = (*stack_a)->content;
	(*stack_a)->content = (*stack_a)->next->content;
	(*stack_a)->next->content = tmp;
	ft_printf("sa\n");
}

void	ft_swap_b(t_stack **stack_b)
{
	int	tmp;

	if (!(*stack_b)->content || !(*stack_b)->next->content)
		return ;
	tmp = (*stack_b)->content;
	(*stack_b)->content = (*stack_b)->next->content;
	(*stack_b)->next->content = tmp;
	ft_printf("sb\n");
}

void	ft_swap_ab(t_stack **stack_a, t_stack **stack_b)
{
	int	tmp_a;
	int	tmp_b;

	if (!(*stack_a)->content || !(*stack_a)->next->content
		|| !(*stack_b)->content || !(*stack_b)->next->content)
		return ;
	tmp_a = (*stack_a)->content;
	(*stack_a)->content = (*stack_a)->next->content;
	(*stack_a)->next->content = tmp_a;
	tmp_b = (*stack_b)->content;
	(*stack_b)->content = (*stack_b)->next->content;
	(*stack_b)->next->content = tmp_b;
	ft_printf("ss\n");
}

void	ft_push_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*node;

	if ((*stack_b) == NULL)
		return ;
	ft_lstadd_front_stack(stack_a, ft_lstnew_stack((*stack_b)->content));
	node = (*stack_b)->next;
	free(*stack_b);
	(*stack_b) = node;
	ft_printf("pa\n");
}

void	ft_push_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*node;

	if ((*stack_a) == NULL)
		return ;
	ft_lstadd_front_stack(stack_b, ft_lstnew_stack((*stack_a)->content));
	node = (*stack_a)->next;
	free(*stack_a);
	(*stack_a) = node;
	ft_printf("pb\n");
}
