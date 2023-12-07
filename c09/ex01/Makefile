NAME = libft.a

SOURCES_DIR = srcs
HEADERS_DIR = includes

SOURCES = $(SOURCES_DIR)/ft_putchar.c \
          $(SOURCES_DIR)/ft_swap.c \
          $(SOURCES_DIR)/ft_putstr.c \
          $(SOURCES_DIR)/ft_strlen.c \
          $(SOURCES_DIR)/ft_strcmp.c

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(AR) $(NAME) $(OBJECTS)

%.o: $(SOURCES_DIR)/%.c
	@$(CC) $(CFLAGS) -I$(HEADERS_DIR) -c $< -o $@

clean:
	@$(RM) $(OBJECTS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
