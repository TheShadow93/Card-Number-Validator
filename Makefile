##
## Makefile for  in /home/sumeet.singh/delivery/CPool_rush2
## 
## Made by Sumeet Singh
## Login   <sumeet.singh@epitech.net>
## 
## Started on  Sat Oct 15 22:53:18 2016 Sumeet Singh
## Last update Sun Oct 16 09:24:29 2016 Sumeet Singh
##

NAME	= rush2

CC	= gcc

RM	= rm -f

SRCS	= main.c \
	  validate.c \
	  fonction.c \
	  fonction2.c \
	  missing.c

OBJ	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: fclean clean all re
