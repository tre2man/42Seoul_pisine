CC=gcc
CFLAGS=-Wall -Wextra -Werror -c

DIRSRC=srcs
DIRINC=includes

TARGET=libft.a
SOURCES=$(DIRSRC)/ft_putchar.c $(DIRSRC)/ft_swap.c $(DIRSRC)/ft_putstr.c $(DIRSRC)/ft_strlen.c $(DIRSRC)/ft_strcmp.c
OBJECTS=$(SOURCES:c=o)
	 
all: $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@ -I $(DIRINC)

$(TARGET) : $(OBJECTS)
	ar -cr $@ $(OBJECTS)
			 
clean:
	rm -f $(OBJECTS)

fclean:
	rm -f $(OBJECTS)
	rm -f $(TARGET)
		 
re: fclean all
