NAME = libft.a

SRCS	= 


HEADER	= libft.h

CC		= gcc

FLGS	= -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)

.c.o:
			$(CC) $(FLGS) -I $(HEADER) -c $<

clean:
			rm -f $(OBJS) 

fclean:		clean
			rm -f $(NAME)

re:			fclean all

