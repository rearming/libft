# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bshanae <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/05 13:31:11 by bshanae           #+#    #+#              #
#    Updated: 2020/01/30 12:28:45 by sleonard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ============================================================================ #
# ATOI AND ITOA
# ============================================================================ #

ATOI_ITOA_FILES =		\
	ft_atoi.c			\
	ft_atoll.c			\
	ft_atoll_base.c		\
	ft_atoull.c			\
	ft_itoa.c			\
	ft_lltoa.c			\
	ft_lltoa_base.c		\
	ft_ulltoa.c			\
	ft_ulltoa_base.c	\
	ft_strtod.c			\

ATOI_ITOA_DIR = 			\
	./src_atoi_itoa/

ATOI_ITOA_OBJ = $(addprefix $(OBJ_DIR), $(ATOI_ITOA_FILES:.c=.o))

# ============================================================================ #
# MATH
# ============================================================================ #

MATH_FILES =			\
	ft_power.c			\
	ft_swap.c			\
	is_even.c			\
	ft_abs.c			\
	ft_max.c			\
	ft_min.c			\

MATH_DIR =				\
	./src_math/

MATH_OBJ = $(addprefix $(OBJ_DIR), $(MATH_FILES:.c=.o))

# ============================================================================ #
# MEMORY
# ============================================================================ #

MEMORY_FILES = 			\
	ft_memcmp.c			\
	ft_bzero.c			\
	ft_memcpy.c			\
	ft_memalloc.c		\
	ft_memccpy.c		\
	ft_memchr.c			\
	ft_memset.c			\
	ft_memdel.c			\
	ft_memmove.c	    \
	clean_chr_mtrx.c    \

MEMORY_DIR = 			\
	./src_memory/

MEMORY_OBJ = $(addprefix $(OBJ_DIR), $(MEMORY_FILES:.c=.o))

# ============================================================================ #
# UTILS
# ============================================================================ #

UTILS_FILES =			\
	ft_count_digits.c		\
	ft_count_digits_base.c	\
	ft_isdigit.c		\
	ft_isalpha.c		\
	ft_isascii.c		\
	ft_isprint.c		\
	ft_isalnum.c		\
	ft_isspace.c		\
	pass_spaces.c		\

UTILS_DIR =				\
	./src_utils/

UTILS_OBJ = $(addprefix $(OBJ_DIR), $(UTILS_FILES:.c=.o))

# ============================================================================ #
# STRING
# ============================================================================ #

STR_FILES = 			\
	ft_strncat.c		\
	ft_strnstr.c		\
	ft_strequ.c			\
	ft_strlen.c			\
	ft_strclr.c			\
	ft_strchr.c			\
	ft_striteri.c		\
	ft_strjoin.c		\
	ft_strstr.c			\
	ft_strcat.c			\
	ft_strdel.c			\
	ft_strnequ.c		\
	ft_strrchr.c		\
	ft_strmap.c			\
	ft_strncmp.c		\
	ft_strcpy.c			\
	ft_strmapi.c		\
	ft_strtrim.c		\
	ft_strnew.c			\
	ft_strlcat.c		\
	ft_strdup.c			\
	ft_striter.c		\
	ft_strsub.c			\
	ft_strncpy.c		\
	ft_strcmp.c         \
	get_next_line.c     \
	ft_strljoin.c		\
	ft_strsplit.c       \
	ft_toupper.c		\
	ft_tolower.c		\
	ft_trim_c.c			\
	ft_strdup_l.c		\
	ft_readfile.c		\
	ft_strlen_char.c	\
	gnl.c				\
	ft_read_files.c		\
	ft_del_whitespaces.c\

STR_DIR = 				\
	./src_string/

STR_OBJ = $(addprefix $(OBJ_DIR), $(STR_FILES:.c=.o))

# ============================================================================ #
# PUT
# ============================================================================ #

PUT_FILES = 			\
	ft_putchar.c		\
	ft_putchar_fd.c		\
	ft_putendl.c		\
	ft_putendl_fd.c		\
	ft_putnbr.c			\
	ft_putnbr_fd.c		\
	ft_putstr.c			\
	ft_putstr_fd.c

PUT_DIR = 				\
	./src_put/

PUT_OBJ = $(addprefix $(OBJ_DIR), $(PUT_FILES:.c=.o))

# ============================================================================ #
# LIST
# ============================================================================ #

LIST_FILES = 			\
	ft_lstadd.c			\
	ft_lstdel.c			\
	ft_lstdelone.c		\
	ft_lstiter.c		\
	ft_lstmap.c			\
	ft_lstnew.c			\
	ft_lstaddback.c 	\
	ft_lstaddback_p.c	\
	ft_lstdel_p.c		\
	ft_lstnew_p.c		\
	ft_lstprint.c		\

LIST_DIR = 				\
	./src_list/

LIST_OBJ = $(addprefix $(OBJ_DIR), $(LIST_FILES:.c=.o))

# ============================================================================ #
# BTREE
# ============================================================================ #

BTREE_FILES = 			\
	btree_create_node.c          \
    btree_insert_data.c          \
    btree_apply_preorder.c       \
    btree_apply_inorder.c        \
    btree_apply_postorder.c      \
    btree_find_item.c            \
    btree_level_count.c          \
    free_btree.c                 \
    avl_tree_create_node.c       \
    avl_tree_helper_functions.c  \
    avl_tree_rebalancing.c       \
    avl_insert_data.c            \
    avl_delete_node.c            \

BTREE_DIR = 			\
	./src_binary_trees/

BTREE_OBJ = $(addprefix $(OBJ_DIR), $(BTREE_FILES:.c=.o))

# ============================================================================ #
# BTREE
# ============================================================================ #

STACK_FILES = 			\
	ft_stack.c			\

STACK_DIR = 			\
	./src_stack/

STACK_OBJ = $(addprefix $(OBJ_DIR), $(STACK_FILES:.c=.o))

# ============================================================================ #
# ============================================================================ #
# LIBFT
# ============================================================================ #
# ============================================================================ #

NAME = libft.a			\

PRINTF_DIR =			\
	./ft_printf/

OBJ = 					\
	$(MEMORY_OBJ)		\
	$(UTILS_OBJ)		\
	$(STR_OBJ)			\
	$(PUT_OBJ)			\
	$(LIST_OBJ)			\
	$(BTREE_OBJ)    	\
	$(ATOI_ITOA_OBJ)	\
	$(MATH_OBJ)			\
	$(STACK_OBJ)		\

OBJ_DIR = ./temp/

COMP = clang -Wall -Wextra -Werror -O2 -fPIC -I ./includes

all : update $(NAME) printf

$(NAME)	: $(OBJ_DIR) $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

update:
	@git submodule init ft_printf
	@git submodule update
	@$(shell mv ../sources/gui/buttons/utils/check_positions.c)

# folder
$(OBJ_DIR) :
	mkdir -p $(OBJ_DIR)

# memory obj
$(OBJ_DIR)%.o : $(MEMORY_DIR)%.c
	$(COMP) -c $< -o $@

# utils obj
$(OBJ_DIR)%.o : $(UTILS_DIR)%.c
	$(COMP) -c $< -o $@

# str obj
$(OBJ_DIR)%.o : $(STR_DIR)%.c
	$(COMP) -c $< -o $@

# put obj
$(OBJ_DIR)%.o : $(PUT_DIR)%.c
	$(COMP) -c $< -o $@

# list obj
$(OBJ_DIR)%.o : $(LIST_DIR)%.c
	$(COMP) -c $< -o $@

# btree obj
$(OBJ_DIR)%.o : $(BTREE_DIR)%.c
	$(COMP) -c $< -o $@

# math obj
$(OBJ_DIR)%.o : $(MATH_DIR)%.c
	$(COMP) -c $< -o $@

# atoi and itoa obj
$(OBJ_DIR)%.o : $(ATOI_ITOA_DIR)%.c
	$(COMP) -c $< -o $@

# atoi and itoa obj
$(OBJ_DIR)%.o : $(STACK_DIR)%.c
	$(COMP) -c $< -o $@

clean :
	@rm -rf $(OBJ_DIR)
	@make clean -C $(PRINTF_DIR)

fclean : clean
	@rm -rf $(NAME)
	@make fclean -C $(PRINTF_DIR)
printf :
	make -C $(PRINTF_DIR)

re : fclean all
