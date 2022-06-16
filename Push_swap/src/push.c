/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 19:57:24 by crigonza          #+#    #+#             */
/*   Updated: 2022/06/13 21:00:11 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void    ft_push_b(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *a;
    t_stack *tmp;
    int nb;

    a = *stack_a;
    nb = a->nb;
    tmp = ft_new_node(nb);
    *stack_a = a->next;
    free(a->prev);
    a->prev = NULL;
    ft_add_top(stack_b, tmp);
    ft_putendl_fd("pb", 2);
}

void    ft_push_a(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *b;
    t_stack *tmp;
    int nb;

    b = *stack_b;
    nb = b->nb;
    tmp = ft_new_node(nb);
    *stack_b = b->next;
    free(b->prev);
    b->prev = NULL;
    ft_add_top(stack_a, tmp);
    ft_putendl_fd("pa", 2);
}