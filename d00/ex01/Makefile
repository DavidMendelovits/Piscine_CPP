NAME := phonebook

SRCS := phonebook.cpp phonebook_entry.cpp

OBJS := $(SRCS:.cpp=.o)

CLANG := clang++

CPPFLAGS := -std=c++98 -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@ $(CLANG) $(OBJS) -o $@

$(OBJS):
	@ $(CLANG) $(CPPFLAGS) $(SRCS) -c

clean:
	@ rm -rf $(OBJS)
	@ echo "Object files deleted!"

fclean: clean
	@ rm -rf $(NAME)
	@ echo "executable deleted!"

re: fclean all