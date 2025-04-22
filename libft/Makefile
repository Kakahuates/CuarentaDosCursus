#Name of the library file, in this case it is the name of the static library since it ends with .a
NAME = libft.a

#Compiler and compilation flags to use
CC = cc
CFLAGS = -Wall -Wextra -Werror

#Header file, facilitates referencing the header file and makes the makefile more flexible and maintainable
INCLUDE = libft.h

#Create libraries (AR -> archiver for creating static and dynamic libraries in UNIX, mainly static)
AR = ar

#Contains the options for the rcs command -> replace/insert, create, symbol table, create or update the static library
ARFLAGS = rcs

#Source files .c
SRC = 	$(wildcard *.c)

#Object files
OBJ = $(SRC:.c=.o)

#Remove files
RM = rm -f

.PHONY: all clean fclean re

#Rules. Targets : dependencies
#                Commands
all: $(NAME)

$(NAME): $(OBJ)
		$(AR) $(ARFLAGS) $@ $^

%.o: %.c $(INCLUDE)
		$(CC) $(CFLAGS) -c $< -o $@
		
clean:
		$(RM) $(OBJ)
		
fclean: clean
		$(RM) $(NAME)

re: fclean all