/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_pipe_at_start.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fderly <fderly@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:40:26 by chugot            #+#    #+#             */
/*   Updated: 2023/08/27 02:58:12 by fderly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	check_pipe_at_start(s_g *s_g)
{
	int	i;

	i = 0;
	while (s_g->i2[i] == ' ' && s_g->i2[i] != 0)
		i++;
	if (s_g->i2[i] == '|')
	{
		printf("Pas de pipe au debut\n");
		return (0);
	}
	return (1);
}
