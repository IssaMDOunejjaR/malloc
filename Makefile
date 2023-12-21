CC    = gcc
FLAGS = -I ./headers
SRCS  = $(wildcard ./**/*.c)
OBJS  = $(SRCS:.c=.o)
NAME  = malloc

all: $(NAME)

$(NAME): $(OBJS) main.c
	$(CC) $(FLAGS) main.c $(OBJS) -o $(NAME)

%.o: %.c headers/*
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	rm -rf ./**/*.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
