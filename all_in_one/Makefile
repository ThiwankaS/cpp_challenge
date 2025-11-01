NAME		= test

AS			= nasm

CC			= gcc

CXX			= g++

CFLAGS		= -Werror -Wall -Wextra -O0 -g

CXXFLAGS	= -Werror -Wall -Wextra -O0 -g -std=c++20

ASFLAGS		= -f elf64

CFLAGS		+= -MMD -MP

CXXFLAGS	+= -MMD -MP

SRCS_ASM	= add.asm

SRCS_C		= data.c

SRCS_CPP	= logic.cpp main.cpp

OBJ_ASM		= $(SRCS_ASM:.asm=.o)

OBJ_C		= $(SRCS_C:.c=.o)

OBJ_CPP		= $(SRCS_CPP:.cpp=.o)

OBJS		= $(OBJ_ASM) $(OBJ_C) $(OBJ_CPP)

DEPS		= $(OBJS:.o=.d)

all    : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(OBJS) -o $@

%.o : %.asm
	$(AS) $(ASFLAGS) $< -o $@

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean  :
	rm -rf $(OBJS) $(DEPS)

fclean : clean
	rm -rf $(NAME)

re	   : fclean all

.PHONY : all clean fclean re
