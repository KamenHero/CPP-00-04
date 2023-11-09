CXXFLAGS = -Wall -Werror -Wextra -std=c++98

CXX = c++

Name = Animal

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(Name)

$(Name): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(Name)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(Name)

re: fclean all

.PHONY: all clean fclean re