/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrusanov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 13:08:20 by vrusanov          #+#    #+#             */
/*   Updated: 2018/04/23 16:32:26 by vrusanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		write(1, &s[index], 1);
		index++;
	}
}
