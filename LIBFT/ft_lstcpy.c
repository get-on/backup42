/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 18:04:25 by ssachet           #+#    #+#             */
/*   Updated: 2015/01/07 10:33:53 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstcpy(t_list *l1, t_list *l2)
{
	if (l1 && l2)
	{
		l1->content = l2->content;
		l1->content_size = l2->content_size;
	}
}
