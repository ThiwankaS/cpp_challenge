#read and write IPv4 address from the console or to the console

NAME	= address

CMD		= g++

VER		= -std=c++20

WARN	= -Wall -Werror -Wextra

FLAGS	= $(WARN) $(VER) -O0 -g

SRC		= \
	IPv4.cpp\
	main.cpp

OBJS	= $(SRC:.cpp=.o)

all		: $(NAME)

$(NAME) : $(OBJS)
	$(CMD) $(FLAGS) $(OBJS) -o $@

%.o		: %.cpp
	$(CMD) $(FLAGS) -c $< -o $@

clean	:
	rm -rf $(OBJS)

fclean	: clean
	rm -rf $(NAME)

re		: fclean all

.PHONY : all clean fclean re

