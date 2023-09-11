NAME = rush-02
C_FILES = dict.c dict_make1.c dict_make2.c errors.c fracture_nbr2.c fracture_nbr.c main.c remove_first_zeros.c strings.c

O_FILES = $(C_FILES:.c=.o)
GCC = gcc -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(O_FILES)
	$(GCC) -o $(NAME) $(O_FILES)

%.o : %.c
	$(GCC) -c $< -o $@

clean :
	rm -f **.o

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
