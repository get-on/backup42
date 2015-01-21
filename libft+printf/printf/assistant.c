/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assistant.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssachet <ssachet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 09:05:30 by ssachet           #+#    #+#             */
/*   Updated: 2015/01/10 20:10:07 by ssachet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

t_a			*new_a(void)
{
	t_a *flag;

	flag = (t_a*)malloc(sizeof(t_a));
	flag->pad = 'l';
	flag->padchar = ' ';
	flag->sign_pad = '\0';
	flag->sign_put = 0;
	flag->longhexaformat = 0;
	flag->bla = 0;
	flag->l_modifier = 0;
	flag->precision = -1;
	flag->width = 0;
	flag->type = 0;
	flag->sign = 0;
	flag->zero = 0;
	flag->p_alpha = 0;
	flag->fd = 0;
	flag->ext_width = 0;
	flag->c_zero = 0;
	flag->quit_error = 0;
	return (flag);
}

void		print_escape(char **str)
{
	(*str)++;
	ft_putchar('a');
	if (**str == '\\')
	{
		ft_putchar('a');
		ft_putchar('\\');
	}
	else if (**str == '\'')
		ft_putchar('\'');
	else if (**str == 'a')
		ft_putchar('\a');
	else if (**str == 'b')
		ft_putchar('\b');
	else if (**str == 'c')
		ft_putchar('\0');
	else if (**str == 'f')
		ft_putchar('\f');
	else if (**str == 'n')
		ft_putchar('\n');
	else if (**str == 'r')
		ft_putchar('\r');
	else if (**str == 't')
		ft_putchar('\t');
	else if (**str == 'v')
		ft_putchar('\v');
}

int			octal_conversion(t_a *flag)
{
	if ((flag->type == 'o') ||
			(flag->type == 'O'))
		return (1);
	return (0);
}

int			no_conversion(t_a *flag)
{
	if (!flag->type)
		return (1);
	return (0);
}
