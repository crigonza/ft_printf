/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 19:41:37 by crigonza          #+#    #+#             */
/*   Updated: 2022/06/27 21:08:47 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_swap_a(t_stack **stack)
{
	t_stack	*tmp;
	int		swap;

	tmp = *stack;
	swap = tmp->next->nb;
	tmp->next->nb = tmp->nb;
	tmp->nb = swap;
	ft_putendl_fd("sa", 2);
}

void	ft_rotate_a(t_stack **stack)
{
	t_stack	*tmp;
	int		nb;

	tmp = *stack;
	nb = tmp->nb;
	while (tmp->next->next != 0)
	{
		tmp->nb = tmp->next->nb;
		tmp = tmp->next;
	}
	tmp->nb = nb;
	ft_putendl_fd("ra", 2);
}

void	ft_rotate_b(t_stack **stack)
{
	t_stack	*tmp;
	int		nb;

	tmp = *stack;
	nb = tmp->nb;
	while (tmp->next->next)
	{
		tmp->nb = tmp->next->nb;
		tmp = tmp->next;
	}
	tmp->nb = nb;
	ft_putendl_fd("rb", 2);
}

void	ft_rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	ft_rotate_a(stack_a);
	ft_rotate_b(stack_b);
	ft_putendl_fd("rr", 2);
}

void	ft_rev_rot_a(t_stack **stack)
{
	//t_stack	*tmp;
	int		nb;

	//tmp = *stack;
	while ((*stack)->next != 0)
		(*stack) = (*stack)->next;
	nb = (*stack)->nb;
	while ((*stack)->prev != 0)
	{
		(*stack)->nb = (*stack)->prev->nb;
		(*stack) = (*stack)->prev;
	}
	(*stack)->nb = nb;
	ft_putendl_fd("rra", 2);
}

void	ft_rev_rot_b(t_stack **stack)
{
	t_stack	*tmp;
	int		nb;

	tmp = *stack;
	while (tmp->next != 0)
		tmp = tmp->next;
	nb = tmp->nb;
	while (tmp->prev != 0)
	{
		tmp->nb = tmp->prev->nb;
		tmp = tmp->prev;
	}
	tmp->nb = nb;
	ft_putendl_fd("rrb", 2);
}

void	ft_rev_rot_ab(t_stack **stack_a, t_stack **stack_b)
{
	ft_rev_rot_a(stack_a);
	ft_rev_rot_b(stack_b);
	ft_putendl_fd("rrr", 2);
}
