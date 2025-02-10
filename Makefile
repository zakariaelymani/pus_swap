NAME = push_swap
BONUS_PROGRAM = checker
HEADER_BONUS = checker/checker_bonus.h 
FALGS = -Wall -Wextra -Werror -fsanitize=address
cc = cc
FILES = mandatory/a_rules.c mandatory/algorthim.c mandatory/b_rules.c mandatory/commonrules.c mandatory/parsing.c mandatory/push_swap.c  mandatory/sortsmallnumber.c mandatory/utils.c \
mandatory/utils1.c mandatory/libft_file/ft_atoi.c mandatory/libft_file/ft_isalpha.c  mandatory/libft_file/ft_isdigit.c mandatory/libft_file/ft_putstr_fd.c mandatory/libft_file/ft_split.c \
mandatory/libft_file/ft_strlen.c mandatory/libft_file/ft_strjoin.c mandatory/libft_file/ft_strdup.c 
BONUS_FILES = checker_bonus/libft_file/ft_atoi_bonus.c checker_bonus/libft_file/ft_isalpha_bonus.c checker_bonus/libft_file/ft_isdigit_bonus.c checker_bonus/libft_file/ft_putstr_fd_bonus.c \
checker_bonus/libft_file/ft_split_bonus.c checker_bonus/libft_file/ft_strdup_bonus.c checker_bonus/libft_file/ft_strjoin_bonus.c  checker_bonus/libft_file/ft_strlen_bonus.c \
checker_bonus/libft_file/ft_strncmp_bonus.c checker_bonus/a_rules_bonus.c checker_bonus/b_rules_bonus.c  checker_bonus/checker_bonus.c checker_bonus/commonrules_bonus.c \
checker_bonus/parsing_bonus.c checker_bonus/readline_bonus.c  checker_bonus/utils_bonus.c 

BJ_BONUS = $(BONUS_FILES:.c=.o)
OBJFILES = $(FILES:.c=.o)
HEADER =  mandatory/push_swap.h

%.o: %.c $(HEADER_BONUS)
	@$(cc) $(FALGS) -c $< -o $@

%.o: %.c $(HEADER)
	@$(cc) $(FALGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJFILES)
	@$(cc) $(FALGS) $(OBJFILES) -o $(NAME)
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