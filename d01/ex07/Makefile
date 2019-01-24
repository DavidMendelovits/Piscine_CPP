NAME := replace

SRCS := bootlegSed.cpp

OBJS := $(SRCS:.cpp=.o)

CLANG := clang++

CPPFLAGS := -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@ $(CLANG) $(OBJS) -o $@

$(OBJS): $(SRCS)
	@ $(CLANG) $(CPPFLAGS) $(SRCS) -c

clean:
	@ rm -rf $(OBJS)
	@ echo "Object files deleted!"

fclean: clean
	@ rm -rf $(NAME)
	@ echo "executable deleted!"

re: fclean all