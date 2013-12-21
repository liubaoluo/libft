/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_t_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 05:59:13 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/21 13:47:45 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_t_strcpy(t_str *str, t_str *orig)
{
	ft_memcpy(str->s, orig->s, orig->l);
	str->l = orig->l;
}
