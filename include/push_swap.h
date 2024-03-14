/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brclemen <brclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:32:47 by brclemen          #+#    #+#             */
/*   Updated: 2024/03/14 02:10:09 by brclemen         ###   ########.fr       */
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
# include <stddef.h>

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

// ===== Sujet fonctions ===== //

void	ft_swap_a(t_stack **stack_a);
void	ft_swap_b(t_stack **stack_b);
void	ft_swap_ab(t_stack **stack_a, t_stack **stack_b);
void	ft_push_a(t_stack **stack_a, t_stack **stack_b);
void	ft_push_b(t_stack **stack_b, t_stack **stack_a);
void	ft_rotate_a(t_stack **stack_a);
void	ft_rotate_ab(t_stack **stack_a, t_stack **stack_b);
void	ft_reverse_rotate_a(t_stack **stack_a);
void	ft_reverse_rotate_b(t_stack **stack_b);
void	ft_reverse_rotate_ab(t_stack **stack_a, t_stack **stack_b);

// ===== Libft fonctions ===== // 

t_stack	*ft_lstnew_stack(int content);
void	ft_lstadd_back_stack(t_stack **lst, t_stack *new);
void	ft_lstadd_front_stack(t_stack **lst, t_stack *new);
void	print_stack(t_stack *stack);
void	ft_lstlast_stack(t_stack **lst);
long	ft_atoi_push(const char *nptr);

// ===== Fonctions utiles ===== //

void	ft_lstbeforelast_stack(t_stack **lst);
void	init_stack(t_stack **stack, char *av[]);

// - NOT RADIX - //

void	ft_five_args(int ac, t_stack **stack_a, t_stack **stack_b);
void	ft_three_content(t_stack **stack_a);
void	ft_four_content(t_stack **stack_a, t_stack **stack_b);

// ===== Fonction errors ===== //

int		error(char *av[]);
int		error_ascii_sign(char *av[]);
int		error_max_min(char *av[]);
int		error_duplicate(char *av[]);
int		is_it_sort(char *av[]);

#endif