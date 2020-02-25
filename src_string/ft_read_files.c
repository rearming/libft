/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_files.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleonard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 13:46:48 by sleonard          #+#    #+#             */
/*   Updated: 2020/02/04 13:46:52 by sleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdarg.h"
#include "libft.h"

static inline char	*exit_clean(char *ptr_to_free)
{
	free(ptr_to_free);
	return (NULL);
}

char				*ft_read_files(int files_nbr, int buff_size, ...)
{
	t_ft_read_files		rf_cat;
	int					i;

	i = 0;
	rf_cat.sum_len = 0;
	if (!(rf_cat.backup = malloc(1)))
		return (NULL);
	rf_cat.backup[0] = 0;
	va_start(rf_cat.ap, buff_size);
	while (i < files_nbr)
	{
		rf_cat.fd = open(va_arg(rf_cat.ap, char*), O_RDONLY);
		if (!(rf_cat.str_file = ft_readfile(rf_cat.fd, &rf_cat.file_size, buff_size)))
			return (exit_clean(rf_cat.backup));
		close(rf_cat.fd);
		rf_cat.sum_len += rf_cat.file_size;
		rf_cat.temp_str = ft_strljoin(rf_cat.backup,
				rf_cat.str_file, rf_cat.sum_len);
		free(rf_cat.str_file);
		free(rf_cat.backup);
		rf_cat.backup = rf_cat.temp_str;
		i++;
	}
	va_end(rf_cat.ap);
	return (rf_cat.backup);
}
