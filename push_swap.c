/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brclemen <brclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:36:16 by brclemen          #+#    #+#             */
/*   Updated: 2024/03/12 23:36:11 by brclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "Libft/libft.h"
#include <stdio.h>

int	main(int ac, char *av[])
{
	t_stack	*stack_a = NULL;
	t_stack	*stack_b = NULL;
	t_stack	*new = NULL;
	int index;

	index = 1;	
	while(av[index])
	{
		new = ft_lstnew_stack(ft_atoi(av[index]));
		ft_lstadd_back_stack(&stack_a, new);
		index++;
	}
	index = 1;
	while(av[index])
	{
		new = ft_lstnew_stack(ft_atoi(av[index]));
		ft_lstadd_back_stack(&stack_b, new);
		index++;
	}
	// print_stack(stack_a);
	// print_stack(stack_b);
	// ft_push_a(&stack_a, &stack_b);
	// ft_swap_a(&stack_a);
	ft_reverse_rotate_a(&stack_a);
}

// void	init_stack(t_stack **stack_a, int content)
// {
// 	t_stack *new = NULL;
// 	new = ft_lstnew_int(content);
// 	ft_lstadd_back_int(stack_a, new);
// }