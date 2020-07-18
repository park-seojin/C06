/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeon <yejeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 19:02:02 by yejeon            #+#    #+#             */
/*   Updated: 2020/07/15 19:03:45 by yejeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*p;
	int		i;

	if (argc > 1)
	{
		i = argc - 1;
		while (0 < i)
		{
			p = argv[i];
			while (*p)
				p++;
			write(1, argv[i], p - argv[i]);
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
