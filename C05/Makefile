CC=gcc
CFLAGS=-Wall -Wextra -Werror
SRC=$(wildcard ./*/*.c)
TARGET=a.out
NFLAGS=-R CheckForbiddenSourceHeader

all : $(TARGET)

$(TARGET) : $(SRC) main.c
	$(CC) $(CFLAGS) $(SRC) main.c

norm : $(SRC)
	norminette $(NFLAGS) $(SRC)

clean : 
	rm $(TARGET)
