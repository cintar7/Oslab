#this is a make file
#SET THE COMPILER
CC = gcc
#SET THE FLAGS
CFLAGS = -g -Wall
#SET THE TARGET
TARGET = Grep
#MAKE
all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:

	$(RM) $(TARGET)

	