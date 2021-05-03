NAME = convert

all :
	clang++ -std=c++98 -Wall -Wextra -Werror *.cpp -o $(NAME)

run : all
	./$(NAME) 0
	./$(NAME) nan
	./$(NAME) 42.0f

clean :
	rm $(NAME)