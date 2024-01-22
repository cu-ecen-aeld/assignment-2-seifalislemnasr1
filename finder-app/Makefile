CC = $(CROSS_COMPILE)gcc
CFLAGS = -Wall -g

# Source file and object file
SRC = writer.c
OBJ = $(SRC:.c=.o)

# Target executable
TARGET = writer

# Default target: build the "writer" application
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Clean target: remove the "writer" application and all .o files
clean:
	rm -f $(TARGET) $(OBJ)

