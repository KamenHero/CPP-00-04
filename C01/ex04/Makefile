CFLAGS = -Wall -Werror -Wextra -std=c++98

CXX = c++

Name = Replace

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(Name)

$(Name): $(OBJS)
		$(CXX) $(CFLAGS) $(OBJS) -o $(Name)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(Name)

re: fclean all

.PHONY: all clean fclean re