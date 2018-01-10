/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoiroud <bmoiroud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 14:58:42 by bmoiroud          #+#    #+#             */
/*   Updated: 2016/11/21 12:07:30 by bmoiroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		len;

	len = ft_strlen(str) - 1;
	i = 0;
	while (i < len)
	{
		ft_swap((void *)&str[i], (void *)&str[len]);
		i++;
		len--;
	}
	return (str);
}
