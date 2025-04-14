SERVER	= server
CLIENT	= client
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

all: $(SERVER) $(CLIENT)


$(SERVER): server.c 
	$(CC) $(CFLAGS) -o server server.c

$(CLIENT): client.c 
	$(CC) $(CFLAGS) -o client client.c

clean:
	$(RM) $(SERVER) $(CLIENT)

fclean: clean

re: fclean all

.PHONY: all clean fclean re