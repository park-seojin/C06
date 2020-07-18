/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yejeon <yejeon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 18:50:17 by yejeon            #+#    #+#             */
/*   Updated: 2020/07/17 19:14:30 by yejeon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **argv, int a, int b)
{
	char	*temp;

	temp = argv[a];
	argv[a] = argv[b];
	argv[b] = temp;
}

void	ft_bubble(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	j = argc - 1;
	while (i < j)
	{
		while (i < j)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap(argv, i, i + 1);
			}
			i++;
		}
		i = 1;
		j--;
	}
}

int		main(int argc, char *argv[])
{
	int		i;
	char	*p;

	ft_bubble(argc, argv);
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
	return (0);
}
