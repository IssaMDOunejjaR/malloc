CC    = gcc
SRCS  = $(wildcard ./srcs/**/*.c ./srcs/*.c)
OBJS  = $(SRCS:.c=.o)
BIN   = malloc
LIB   = utils
FLAGS = -Iheaders/ -Ilib/headers/ 

all: $(BIN)

$(BIN): $(LIB) $(OBJS) main.c
	$(CC) $(FLAGS) main.c ./lib/$(LIB) -o $(BIN)

%.o: %.c headers/*
	$(CC) $(FLAGS) -o $@ -c $< ./lib/$(LIB)

$(LIB):
	$(MAKE) -C lib

clean:
	rm -rf ./srcs/**/*.o
	rm -rf ./srcs/*.o
	$(MAKE) -C lib clean

fclean: clean
	rm -rf $(BIN)
	$(MAKE) -C lib fclean

re: fclean all
