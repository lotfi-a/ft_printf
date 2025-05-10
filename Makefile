NAME = libftprintf.a

SRC = ft_printf.c src/ft_putchar.c src/ft_putstr.c src/ft_putnbr.c src/ft_puthex_base.c src/ft_putptr.c src/ft_putnbr_unsigned.c
OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
EXEC = main

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Création de la librairie $(NAME)..."
	ar rcs $(NAME) $(OBJ)


%.o: %.c
	@echo "Compilation de $<..."
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Suppression des fichiers objets..."
	$(RM) $(OBJ)
	@echo "Nettoyage terminé."

fclean: clean
	@echo "Suppression de la librairie $(NAME) et de l'exécutable $(EXEC)..."
	$(RM) $(NAME) $(EXEC)
	@echo "Tout est propre."

re: fclean all

$(EXEC): $(NAME) main.c
	@echo "Compilation de l'exécutable $(EXEC)..."
	$(CC) $(CFLAGS) main.c $(NAME) -o $(EXEC)
	@echo "Exécutable $(EXEC) créé avec succès."
