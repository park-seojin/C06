/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeon <yejeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 18:53:55 by yejeon            #+#    #+#             */
/*   Updated: 2020/07/15 20:35:03 by yejeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*p;

	if (argc > 0)
	{
		p = argv[0];
		while (*p)
			p++;
		write(1, argv[0], p - argv[0]);
		write(1, "\n", 1);
	}
	return (0);
}
