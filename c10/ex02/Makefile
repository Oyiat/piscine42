NAME = ft_tail

SOURCES = ft_tail.c

HEADER = ft_tail.h

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
