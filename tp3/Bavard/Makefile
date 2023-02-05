CC = g++
CFLAGS = -Wall -Wextra -Werror -g
TARGET =  main
SOURCES = bavard.cpp couple.cpp famille.cpp main.cpp 
OBJECTS = $(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)