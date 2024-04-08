/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brclemen <brclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:36:16 by brclemen          #+#    #+#             */
/*   Updated: 2024/03/25 17:32:34 by brclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, char *av[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		return (0);
	if (ac >= 2 && error(av) != -1)
	{
		ft_init_stack(&stack_a, av);
		ft_indexage(stack_a);
		if (ac <= 6)
			ft_call_no_radix(ac, &stack_a, &stack_b);
		else if (ac > 6)
			ft_call_radix(&stack_a, &stack_b);
	}
	print_stack(stack_a);
	ft_lstclear_stack(&stack_a);
	ft_lstclear_stack(&stack_b);
}

void	ft_call_radix(t_stack **stack_a, t_stack **stack_b)
{
	int	size;
	int	max_num;
	int	max_bits;
	int	i;
	int	j;

	i = -1;
	size = ft_lstsize_stack((*stack_a));
	max_num = size - 1;
	max_bits = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				ft_rotate_a(stack_a);
			else
				ft_push_b(stack_a, stack_b);
		}
		while ((*stack_b))
			ft_push_a(stack_a, stack_b);
	}
}

void	ft_call_no_radix(int ac, t_stack **stack_a, t_stack **stack_b)
{
	if (ac == 3)
		ft_swap_a(stack_a);
	if (ac == 4)
		ft_three_content(stack_a);
	if (ac == 5)
		ft_four_content(stack_a, stack_b);
	if (ac == 6)
		ft_five_content(stack_a, stack_b);
}

void	ft_indexage(t_stack *stack)
{
	int			i;
	t_stack		*temp;
	t_stack		*start;

	i = 0;
	temp = stack;
	start = temp;
	while (stack)
	{
		temp = start;
		while (temp)
		{
			if (temp->content < stack->content)
				i++;
			temp = temp->next;
		}
		stack->index = i;
		stack = stack->next;
		i = 0;
	}
}

void	ft_init_stack(t_stack **stack, char *av[])
{
	int		index;
	t_stack	*new;

	index = 1;
	while (av[index])
	{
		new = ft_lstnew_stack(ft_atoi(av[index]));
		ft_lstadd_back_stack(stack, new);
		index++;
	}
}
