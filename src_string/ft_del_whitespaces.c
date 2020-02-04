/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_whitespaces.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 13:46:02 by sleonard          #+#    #+#             */
/*   Updated: 2020/02/04 13:46:07 by sleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static inline size_t	count_result_len(const char *str)
{
	size_t		i;
	size_t		res_len;
	bool		first_whitespace;

	i = 0;
	res_len = 0;
	first_whitespace = false;
	while (ft_isspace(str[i]))
		i++;
	while (str[i])
	{
		if (!ft_isspace(str[i]))
		{
			if (first_whitespace == false)
				res_len++;
			res_len++;
			first_whitespace = true;
		}
		else if (first_whitespace == true)
			first_whitespace = false;
		i++;
	}
	return (res_len);
}

static inline char		*fill_string(const char *str, size_t i,
		size_t res_len, bool first_whitespace)
{
	char	*result;

	if (!(result = malloc(sizeof(char) * (res_len + 1))))
		return (NULL);
	first_whitespace = false;
	res_len = 0;
	while (str[i])
	{
		if (!ft_isspace(str[i]))
		{
			if (first_whitespace == false)
			{
				result[res_len] = ' ';
				res_len++;
			}
			result[res_len] = str[i];
			res_len++;
			first_whitespace = true;
		}
		else if (first_whitespace == true)
			first_whitespace = false;
		i++;
	}
	result[res_len] = '\0';
	return (result);
}

char					*ft_del_whitespaces(const char *str)
{
	char		*temp_result;
	char		*result;
	size_t		i;
	size_t		res_len;
	bool		first_whitespace;

	if ((res_len = count_result_len(str)) == 0)
		return (NULL);
	i = 0;
	first_whitespace = false;
	temp_result = fill_string(str, i, res_len, first_whitespace);
	result = ft_strtrim(temp_result);
	free(temp_result);
	return (result);
}
