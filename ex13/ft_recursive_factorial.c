/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcollin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:56:32 by alcollin          #+#    #+#             */
/*   Updated: 2016/11/03 17:13:00 by alcollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 13 && nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	if (nb == 1 || nb == 0)
		return (1);
	else
		return (0);
}
