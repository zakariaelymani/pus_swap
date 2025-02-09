NAME = push_swap
BONUS_PROGRAM = checker
HEADER_BONUS = checker/checker_bonus.h
FALGS = -Wall -Wextra -Werror 
cc = cc
FILES = parsing.c push_swap.c algorthim.c b_rules.c a_rules.c commonrules.c sortsmallnumber.c \
utils.c utils1.c libft_file/ft_atoi.c\
 libft_file/ft_putstr_fd.c libft_file/ft_split.c\
libft_file/ft_strjoin.c libft_file/ft_strlen.c  libft_file/ft_strdup.c libft_file/ft_isalpha.c \
libft_file/ft_isdigit.c
BONUS_FILES = checker_bonus/libft_file/ft_atoi_bonus.c checker_bonus/libft_file/ft_isalpha_bonus.c checker_bonus/libft_file/ft_isdigit_bonus.c checker_bonus/libft_file/ft_putstr_fd_bonus.c \
checker_bonus/libft_file/ft_split_bonus.c checker_bonus/libft_file/ft_strdup_bonus.c checker_bonus/libft_file/ft_strjoin_bonus.c  checker_bonus/libft_file/ft_strlen_bonus.c \
checker_bonus/libft_file/ft_strncmp_bonus.c checker_bonus/a_rules_bonus.c checker_bonus/b_rules_bonus.c  checker_bonus/checker_bonus.c checker_bonus/commonrules_bonus.c \
checker_bonus/parsing_bonus.c checker_bonus/readline_bonus.c  checker_bonus/utils_bonus.c 

BJ_BONUS = $(BONUS_FILES:.c=.o)
OBJFILES = $(FILES:.c=.o)
HEADER = push_swap.h

%.o: %.c $(HEADER_BONUS)
	@$(cc) $(FALGS) -c $< -o $@

%.o: %.c $(HEADER)
	@$(cc) $(FALGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJFILES)
	$(cc) $(FALGS) $(OBJFILES) -o $(NAME)
bonus: $(BONUS_PROGRAM)

$(BONUS_PROGRAM): $(BJ_BONUS)
	@$(cc) $(FALGS) $(BJ_BONUS) -o $(BONUS_PROGRAM)
clean: 
	@rm -rf $(OBJFILES)
	@rm -rf $(BJ_BONUS)

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(BONUS_PROGRAM)

re: fclean all

.PHONY: clean