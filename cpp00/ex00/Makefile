NAME = megaphone
CC = clang++
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I ./
EXEC_SRCS = ex00.cpp

EXEC_OBJS = $(EXEC_SRCS:.cpp=.o)

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $< $(INCLUDE)

all : $(NAME)

$(NAME) : $(EXEC_OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(INCLUDE) $(EXEC_OBJS)

clean :
	rm -rf $(EXEC_OBJS)
fclean : clean
	rm -rf $(NAME)
re : fclean all

.PHONY: all clean fclean re
