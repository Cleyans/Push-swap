/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brclemen <brclemen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:50:47 by brclemen          #+#    #+#             */
/*   Updated: 2024/03/19 15:35:12 by brclemen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	error(char *av[])
{
	if (error_ascii_sign(av) == 1)
	{
		ft_printf("Error\n");
		return (-1);
	}
	else if (error_max_min(av) == 1)
	{
		ft_printf("Error\n");
		return (-1);
	}
	else if (error_duplicate(av) == 1)
	{
		ft_printf("Error\n");
		return (-1);
	}
	else if (is_it_sort(av) == 1)
		return (-1);
	return (0);
}

int	error_ascii_sign(char *av[])
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (av[j])
	{
		i = 0;
		while (av[j][i])
		{
			if (av[j][i] == '-')
				i++;
			if (!(av[j][i] >= '0' && av[j][i] <= '9'))
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}

int	error_max_min(char *av[])
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (ft_atoi_push(av[i]) > 2147483647
			|| ft_atoi_push(av[i]) < -2147483648)
			return (1);
		i++;
	}
	return (0);
}

int	error_duplicate(char *av[])
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_it_sort(char *av[])
{
	int	index;

	index = 1;
	while (av[index + 1])
	{
		if (ft_atoi(av[index]) < ft_atoi(av[index + 1]))
			index++;
		else
			return (0);
	}
	return (1);
}
