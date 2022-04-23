/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonza <crigonza@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:22:38 by crigonza          #+#    #+#             */
/*   Updated: 2022/04/23 12:16:08 by crigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Scans the initial n bytes of the memory pointed to by s for the first      */
/* instance of c.                                                             */

#include"libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*schar;
	unsigned char	*find;
	schar = (unsigned char*)s;
	find = NULL;
	while(n-- && *schar != '\0')
	{
		if (*schar != (unsigned char)c )
			schar++;
		else
		{
			find = schar;
			break;
		}
	}
	return (find);
}
