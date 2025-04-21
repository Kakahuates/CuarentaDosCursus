#Nombre del archivo de la biblioteca, en este caso es el nombre de la libreria estatica ya que termina con .a
NAME = libft.a

#Compinador y banderas de compilacion a usar
CC = cc
CFLAGS = -Wall -Wextra -Werror

#archivo de encabezado, facilitar la referencia al archivo de encabezado y hace makefile mas flexible y mantenible
INCLUDE = libft.h

#Crear biblitecas (AR -> archivero para crear biblitecas en UNIX estaticas y dinamicas, prinicipalmente estaticos)
AR = ar

#Contiene las opciones del comando rcs -> replace/insert, create, symbol table, crear o estualizar la libreria estatica
ARFLAGS = rcs

#Archivos fuente .c
SRC = 	$(wildcard *.c)

#Archivos objeto
OBJ = $(SRC:.c=.o)

#Eliminar archivos
RM = rm -f

.PHONY: all clean fclean re

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