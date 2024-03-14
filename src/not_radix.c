/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   not_radix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brclemen <brclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 23:30:35 by brclemen          #+#    #+#             */
/*   Updated: 2024/03/14 02:01:37 by brclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>

void	ft_three_content(t_stack **stack_a)
{
	if ((*stack_a)->content > (*stack_a)->next->content)
		ft_rotate_a(stack_a);
	if ((*stack_a)->content > (*stack_a)->next->content)
		ft_swap_a(stack_a);
	if ((*stack_a)->next->content > (*stack_a)->next->next->content)
		ft_reverse_rotate_a(stack_a);
	if ((*stack_a)->content > (*stack_a)->next->content)
		ft_swap_a(stack_a);
}

void	ft_four_content(t_stack **stack_a, t_stack **stack_b)
{
	ft_push_b(stack_a, stack_b);
	ft_three_content(stack_a);
	if ((*stack_b)->content < (*stack_a)->content)
		ft_push_a(stack_a, stack_b);
	else if ((*stack_b)->content > (*stack_a)->next->next->content)
	{
		ft_push_a(stack_a, stack_b);
		ft_rotate_a(stack_a);
	}
	else if ((*stack_a)->content < (*stack_b)->content
		&& (*stack_b)->content < (*stack_a)->next->content)
	{
		ft_push_a(stack_a, stack_b);
		ft_swap_a(stack_a);
	}
	else if ((*stack_a)->next->next->content > (*stack_b)->content
		&& (*stack_b)->content > (*stack_a)->next->content)
	{
		ft_push_a(stack_a, stack_b);
		ft_reverse_rotate_a(stack_a);
		ft_swap_a(stack_a);
		ft_rotate_a(stack_a);
		ft_rotate_a(stack_a);
	}
}
