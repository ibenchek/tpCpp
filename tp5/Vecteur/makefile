SRC=Vecteur.cpp tests_catch.cpp main_test.cpp
#SRC=$(wildcard *.cpp)  
EXE=cpp5

CXXFLAGS+=-Wall -Wextra -MMD -g -O2
LDFLAGS= 

OBJ=$(addprefix build/,$(SRC:.cpp=.o))
DEP=$(addprefix build/,$(SRC:.cpp=.d))

all: $(OBJ)
	$(CXX) -o $(EXE) $^ $(LDFLAGS)

build/%.o: %.cpp
	@mkdir -p build
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -rf build core *.gch

-include $(DEP)
