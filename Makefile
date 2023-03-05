# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moonegg <moonegg@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 09:04:03 by kkaiyawo          #+#    #+#              #
#    Updated: 2023/02/28 09:03:48 by moonegg          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

INCL_DIR	= .

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
INCL		= -I${INCL_DIR}
AR			= ar rcs
LIB			= ranlib
RM			= rm -f

SRCS_DIR	= .
SRCS		= ${SRCS_DIR}/ft_printf.c ${SRCS_DIR}/ft_printf_sharp.c\
			${SRCS_DIR}/ft_btox.c\
			${SRCS_DIR}/ft_printf_c.c ${SRCS_DIR}/ft_printf_d.c\
			${SRCS_DIR}/ft_printf_i.c ${SRCS_DIR}/ft_printf_p.c\
			${SRCS_DIR}/ft_printf_s.c ${SRCS_DIR}/ft_printf_u.c\
			${SRCS_DIR}/ft_printf_x.c ${SRCS_DIR}/ft_printf_switchcase.c\
			${SRCS_DIR}/ft_printf_utils.c ${SRCS_DIR}/ft_printf_utils2.c\

OBJS		= ${SRCS:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}
			${LIB} ${NAME}

.c.o:
			${CC} ${CFLAGS} ${INCL} -c $< -o ${<:.c=.o}

#bonus:		${OBJS} ${OBJSB}
#			${AR} ${NAME} ${OBJS} ${OBJSB}

#bonus:		all

clean:
			${RM} ${OBJS}
#cleanb:		clean
#			make cleanb -C ${LIBFT_DIR}
#			${RM} ${OBJSB}

fclean:		clean
			${RM} ${NAME}

#fcleanb:	cleanb fclean

re:			fclean all

#reb:		fcleanb bonus

.PHONY:		all clean fclean re
