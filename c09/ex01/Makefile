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
AR = ar -rcs
RM = rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HEADERS_DIR}

${NAME}: ${OBJECTS}
	${AR} ${NAME} ${OBJECTS}

all: ${NAME}

clean:
	${RM} ${OBJECTS}

fclean: clean
	${RM} ${NAME}

re: fclean all
