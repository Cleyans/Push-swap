/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brclemen <brclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:32:47 by brclemen          #+#    #+#             */
/*   Updated: 2024/03/13 00:00:14 by brclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*
************************************************************
*                          INCLUDE                         *
************************************************************
*/

# include <stddef.h>
# include "Libft/libft.h"

/*
************************************************************
*                           LIST                           *
************************************************************
*/

typedef struct s_stack
{
	int					content;
	int					index;
	struct s_stack		*next;
}						t_stack;

/*
************************************************************
*                         FONCTIONS                        *
************************************************************
*/

// Sujet fonctions //

void	ft_swap_a(t_stack **stack_a);
void	ft_swap_b(t_stack **stack_b);
void	ft_swap_ab(t_stack **stack_a, t_stack **stack_b);
void	ft_push_a(t_stack **stack_a, t_stack **stack_b);
void	ft_push_b(t_stack **stack_b, t_stack **stack_a);
void	ft_rotate_a(t_stack **stack_a);
void    ft_rotate_ab(t_stack **stack_a, t_stack **stack_b);
void    ft_reverse_rotate_a(t_stack **stack_a);
void    ft_reverse_rotate_b(t_stack **stack_b);

// Libft fonctions // 

t_stack	*ft_lstnew_stack(int content);
void	ft_lstadd_back_stack(t_stack **lst, t_stack *new);
void	ft_lstadd_front_stack(t_stack **lst, t_stack *new);
void    print_stack(t_stack *stack);

#endif