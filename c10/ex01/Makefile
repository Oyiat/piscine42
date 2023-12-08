NAME = ft_cat

SOURCES_DIR = srcs
HEADERS_DIR = includes

SOURCES = $(SOURCES_DIR)/ft_cat.c \
		  $(SOURCES_DIR)/ft_putstr.c \

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
