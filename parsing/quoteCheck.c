/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chugot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:40:26 by chugot            #+#    #+#             */
/*   Updated: 2023/04/20 11:40:27 by chugot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	quote_check(char *input)
{
	int	i;

	i = 0;
	while (input[i] != 0)
	{
		if (input[i] == '\'')
		{
			i++;
			while (input[i] != '\'')
				if (input[i++] == 0)
					return (0);
		}
		if (input[i] == '"')
		{
			i++;
			while (input[i] != '"')
				if (input[i++] == 0)
					return (0);
		}
		i++;
	}
	return (1);
}
