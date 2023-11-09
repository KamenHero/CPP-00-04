CFLAGS = -Wall -Werror -Wextra -std=c++98

CXX = c++

Name = zombieHorde

SRCS = Zombie.cpp main.cpp zombieHorde.cpp

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