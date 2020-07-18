/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeon <yejeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 18:56:21 by yejeon            #+#    #+#             */
/*   Updated: 2020/07/15 19:01:36 by yejeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*p;
	int		i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			p = argv[i];
			while (*p)
				p++;
			write(1, argv[i], p - argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
