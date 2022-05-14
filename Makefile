NAME	:= daily_code
CXX		:= c++
CXXFLAGS:= -Wall -Wextra -Werror -std=c++98

SRCS	:= problem_002.cpp
			
OBJS	:= $(SRCS:.cpp=.o)

.PHONY : all clean fclean re

all : $(NAME)

$(NAME)	: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^
clean	:
	$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re	: fclean all