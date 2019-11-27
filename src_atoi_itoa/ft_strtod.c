/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtod.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rearming <rearming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 20:28:25 by rearming          #+#    #+#             */
/*   Updated: 2019/08/01 11:04:43 by sleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double		get_fract_part(long long fract)
{
	const int	digits = ft_count_digits(fract);
	int			i;
	double		fract_res;

	i = 0;
	fract_res = (double)fract;
	while (i < digits)
	{
		fract_res /= 10;
		i++;
	}
	return (fract_res);
}

double		ft_strtod(const char *str)
{
	double		result;
	long long	whole;
	long long	fract;
	size_t		begin;

	fract = 0;
	begin = pass_spaces(str);
	whole = ft_atoll(&str[begin]);
	begin += str[begin] == '-';
	if (str[begin + ft_count_digits(whole)] == '.')
		fract = ft_atoll(&str[begin + ft_count_digits(whole) + 1]);
	if (whole >= 0)
		result = ((double)whole + get_fract_part(fract));
	else
		result = ((double)whole - get_fract_part(fract));
	if (begin > 0 && str[begin - 1] != '-' && result < 0)
		return (-1.0);
	return (result);
}
