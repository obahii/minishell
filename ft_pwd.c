/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obahi <obahi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 12:31:23 by obahi             #+#    #+#             */
/*   Updated: 2023/08/20 12:46:29 by obahi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_pwd(char **args)
{
	char	*pwd;

	(void)args;
	pwd = 0;
	pwd = getcwd(0, 0);
	ft_putendl_fd(pwd, 1);
	ft_free(&pwd);
}
