# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: byu <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/18 02:58:21 by byu               #+#    #+#              #
#    Updated: 2021/03/18 10:30:35 by namwkim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAG = -Wall -Wextra -Werror

TARGET = bsq
SOURCES = main.c ft_start.c ft_print.c is_valid_map.c ft_split.c ft_make_map.c ft_make_map2.c ft_atoi.c free.c explore.c cal.c bsq_start.c ft_read_one_line.c
OBJECTS = bsq_start.o cal.o explore.o free.o ft_atoi.o ft_make_map.o ft_make_map2.o ft_split.o is_valid_map.o print.o main.o ft_start.o ft_read_one_line.o

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAG) -g -o $@ $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAG) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
