CC = g++
CFLAGS = -Wall -Wextra -Werror -g
TARGET =  main
SOURCES = mere.cpp fille.cpp main.cpp 
OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)