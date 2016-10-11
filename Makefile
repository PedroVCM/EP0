BINFOLDER := bin/
INCFOLDER := include/
SRCFOLDER := source/
OBJFOLDER := obj/

COMPILER := g++
FLAGS := -Wall -ansi -I$(INCFOLDER)

SRCFILES := $(wildcard source/*.cpp)

all:	 $(SRCFILES:source/%.cpp=obj/%.o)
		$(COMPILER) $(FLAGS) $(OBJFOLDER)*.o -o $(BINFOLDER)EP0

obj/%.o:	source/%.cpp
				$(COMPILER) $(FLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(OBJFOLDER)*
	rm -rf bin/*

run:
	$(BINFOLDER)EP0
