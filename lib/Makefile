CC    = gcc
FLAGS = -Iheaders
SRCS  = $(wildcard ./srcs/**.c ./srcs/**/*.c)
OBJS  = $(SRCS:.c=.o)
LIB   = utils

all: $(LIB)

$(LIB): $(OBJS) 
	ar -rcs $(LIB) $(OBJS)

%.o: %.c headers/*
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	rm -rf ./srcs/**/*.o
	rm -rf ./srcs/*.o

fclean: clean
	rm -rf $(LIB)

re: fclean all
