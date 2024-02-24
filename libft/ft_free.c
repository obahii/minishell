/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obahi <obahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 08:24:27 by obahi             #+#    #+#             */
/*   Updated: 2023/08/14 12:49:55 by obahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void	ft_free(char **ptr)
{
	if (*ptr)
	{
		free(*ptr);
		*ptr = 0;
	}
}
