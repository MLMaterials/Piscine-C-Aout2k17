/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgirland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 14:14:23 by pgirland          #+#    #+#             */
/*   Updated: 2017/08/06 09:52:34 by pgirland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_o_to_o1(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('A');
			if (i == x)
				ft_putchar('\n');
		}
		else if (i == x)
		{
			ft_putchar('C');
			ft_putchar('\n');
		}
		else
			ft_putchar('B');
		i++;
	}
}

void	ft_o_to_o2(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('A');
			if (i == x)
				ft_putchar('\n');
		}
		else if (i == x)
		{
			ft_putchar('C');
			ft_putchar('\n');
		}
		else
			ft_putchar('B');
		i++;
	}
}

void	ft_o_down_o(int x)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('B');
			if (i == x)
				ft_putchar('\n');
		}
		else if (i == x)
		{
			ft_putchar('B');
			ft_putchar('\n');
		}
		else
			ft_putchar(' ');
		i++;
	}
}

void	rush(int x, int y)
{
	int i;

	i = 1;
	if (x > 0 && y > 0)
	{
		while (i <= y)
		{
			if (i == 1)
				ft_o_to_o1(x);
			else if (i == y)
				ft_o_to_o2(x);
			else
				ft_o_down_o(x);
			i++;
		}
	}
}
