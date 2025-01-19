SRC=client.c server.c utils.c
OBJ=$(SRC:.c=.o)
BSRC=client_bonus.c server_bonus.c utils.c
BOBJ=$(BSRC:.c=.o)
CFLAGS=-Wall -Wextra -Werror
LIBFT_AR=./libft/libft.a
PRINTF_AR=./printf/libftprintf.a

all: $(LIBFT_AR) $(PRINTF_AR) client server

client: client.o
	@$(CC) $(CFLAGS) -o $@ $^ $(LIBFT_AR) $(PRINTF_AR)

server: server.o utils.o
	@$(CC) $(CFLAGS) -o $@ $^ $(LIBFT_AR) $(PRINTF_AR)

bonus: $(LIBFT_AR) client_bonus server_bonus 

client_bonus: client_bonus.o
	@$(CC) $(CFLAGS) -o $@ $^ $(LIBFT_AR) $(PRINTF_AR)

server_bonus: server_bonus.o utils.o
	@$(CC) $(CFLAGS) -o $@ $^ $(LIBFT_AR) $(PRINTF_AR)

$(LIBFT_AR):
	@make -C ./libft
	@make -C ./printf

clean:
	@make -C ./libft clean
	@make -C ./printf clean
	@rm -f $(OBJ) $(BOBJ)

fclean: clean
	@make -C ./libft fclean
	@make -C ./printf fclean
	@rm -f client server client_bonus server_bonus

re: fclean all

ha : all bonus clean

.PHONY: all clean fclean re ha
