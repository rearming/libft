/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structs.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleonard <sleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:32:49 by sleonard          #+#    #+#             */
/*   Updated: 2019/10/28 18:57:40 by sleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRUCTS_H
# define FT_STRUCTS_H

# include <stdlib.h>
# include <stdarg.h>
# include <stdbool.h>

# define STACK_NO_COPY (-1)

typedef struct			s_stack_elem
{
	void				*data;
	int					size;
}						t_stack_elem;

typedef struct			s_stack
{
	t_stack_elem		*elems;
	int					size;
	int					last_elem;
}						t_stack;

typedef struct			s_list
{
	void				*content;
	size_t				content_size;
	struct s_list		*next;
	struct s_list		*last;
}						t_list;

typedef struct			s_btree
{
	struct s_btree		*left;
	struct s_btree		*right;
	void				*data;
}						t_btree;

typedef struct			s_avl_tree
{
	struct s_avl_tree	*left;
	struct s_avl_tree	*right;
	void				*data;
	unsigned char		height;
}						t_avl_tree;

typedef struct			s_ft_readfile
{
	char				*temp_str;
	char				*backup;
	char				*buf;
	int					read_res;
	size_t				sum_len;
}						t_ft_readfile;

typedef struct			s_ft_read_files
{
	char				*temp_str;
	char				*backup;
	size_t				sum_len;
	va_list				ap;
	char				*str_file;
	size_t				file_size;
	int					fd;
}						t_ft_read_files;

#endif
