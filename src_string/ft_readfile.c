/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rearming <rearming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 20:28:25 by rearming          #+#    #+#             */
/*   Updated: 2019/08/01 11:04:43 by sleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_readfile(int fd, size_t *out_size, int buff_size)
{
	t_ft_readfile	gnl;

	gnl.sum_len = 0;
	gnl.backup = malloc(1);
	gnl.backup[0] = 0;
	gnl.temp_str = NULL;
	gnl.buf = malloc(sizeof(char) * (buff_size + 1));
	if (buff_size <= 0 || !gnl.buf || fd < 0 || read(fd, gnl.buf, 0) < 0)
	{
		free(gnl.backup);
		free(gnl.buf);
		return (NULL);
	}
	while ((gnl.read_res = read(fd, gnl.buf, buff_size)))
	{
		gnl.sum_len += gnl.read_res;
		gnl.buf[gnl.read_res] = '\0';
		gnl.temp_str = ft_strljoin(gnl.backup, gnl.buf, gnl.sum_len);
		free(gnl.backup);
		gnl.backup = gnl.temp_str;
	}
	free(gnl.buf);
	if (out_size)
		*out_size = gnl.sum_len;
	return (gnl.backup);
}
