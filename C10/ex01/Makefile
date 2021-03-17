CC=gcc
CFLAGS= -Wall -Wextra -Werror

TARGET = ft_cat
SOURCES = display_file.c
OBJECTS = $(SOURCES:c=o)
	 
all: $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@  $^
			 
clean:
	rm -f $(OBJECTS)

fclean:
	rm -f $(TARGET)
		 
re: fclean all
