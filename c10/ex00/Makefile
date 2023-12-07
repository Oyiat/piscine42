NAME = ft_display_file

SOURCES = ft_display_file.c

HEADER = ft_display_file.h

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
