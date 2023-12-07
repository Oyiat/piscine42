NAME = ft_cat

SOURCES = ft_cat.c

HEADER = ft_cat.h

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
