NAME = do-op

SOURCES_DIR = srcs
HEADERS_DIR = includes

SOURCES = $(SOURCES_DIR)/main.c \
		  $(SOURCES_DIR)/ft_operations.c \
		  $(SOURCES_DIR)/ft_do_op.c \
		  $(SOURCES_DIR)/ft_atoi.c \
		  $(SOURCES_DIR)/ft_putchar.c \
		  $(SOURCES_DIR)/ft_putnbr.c

HEADER = $(HEADERS_DIR)/ft_ft.h

OBJECTS = $(SOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

all: $(NAME)

$(NAME): $(OBJECTS) $(HEADERS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean
