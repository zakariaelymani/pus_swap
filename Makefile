NAME = push_swap
FALGS = -Wall -Wextra -Werror
cc = cc
FILES = prsing.c push_swap.c algorthim.c b_rules.c a_rules.c commonrules.c sortsmallnumber.c \
utils.c utils1.c libft_file/ft_atoi.c\
 libft_file/ft_putstr_fd.c libft_file/ft_split.c\
libft_file/ft_strjoin.c libft_file/ft_strlen.c  libft_file/ft_strdup.c libft_file/ft_isalpha.c \
libft_file/ft_isdigit.c 

OBJFILES = $(FILES:.c=.o)
HEADER = push_swap.h

%.o: %.c $(HEADER)
	$(cc) $(FALGS) -c $< -o $@

all: $(NAME)

$(NAME):
	$(cc) $(FALGS) $(OBJFILES) -o $(NAME)

clean: 
	rm -rf **/**.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean