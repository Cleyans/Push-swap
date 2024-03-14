/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brclemen <brclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:36:16 by brclemen          #+#    #+#             */
/*   Updated: 2024/03/14 02:08:07 by brclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// Still have to do the index things.

// Cheking all the errors before putting every thing in the stack.
// put all the values that you got in the args in the stack_a.
// To do the one, two, three, four, five list of args, Radix doesn't do these.
int	main(int ac, char *av[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (ac > 2 && error(av) != -1)
	{
		init_stack(&stack_a, av);
		if (ac <= 6)
		{
			ft_five_args(ac, &stack_a, &stack_b);
		}
		else
		{
		}
	}
}

void	ft_five_args(int ac, t_stack **stack_a, t_stack **stack_b)
{
	if (ac == 3)
		ft_swap_a(stack_a);
	if (ac == 4)
		ft_three_content(stack_a);
	if (ac == 5)
	{
		ft_four_content(stack_a, stack_b);
	}
	if (ac == 6)
	{
	}
}

void	init_stack(t_stack **stack, char *av[])
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

// int	main(int ac, char *av[])
// {
// 	error(av);
// 	t_stack	*stack_a = NULL;
// 	t_stack	*stack_b = NULL;
// 	t_stack	*new = NULL;
// 	if (ac == 1)
// 		return (1);
// 	int index;

// 	index = 1;	
// 	while(av[index])
// 	{
// 		new = ft_lstnew_stack(ft_atoi(av[index]));
// 		ft_lstadd_back_stack(&stack_a, new);
// 		index++;
// 	}
// 	index = 1;
// 	while(av[index])
// 	{
// 		new = ft_lstnew_stack(ft_atoi(av[index]));
// 		ft_lstadd_back_stack(&stack_b, new);
// 		index++;
// 	}
// 	// ft_push_a(&stack_a, &stack_b);
// 	// print_stack(stack_a);
// 	// print_stack(stack_b);
// 	// print_stack(stack_a);
// 	// print_stack(stack_b);
// 	return (0);
// }
