CXXFLAGS = -Wall -Werror -Wextra -std=c++98

CXX = c++

Name = a.out

SRCS = AMateria.cpp main.cpp Character.cpp  Cure.cpp Ice.cpp MateriaSource.cpp Structing.cpp

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