CC = gcc
CXX = g++
CFLAGS = -g
PROG = test

.PHONY = all clean

all : $(PROG)
	@echo "Job's done!"

%.o : %.cpp
	$(CXX) -c $(CFLAGS) $^ -o $@

test : test.o friend.o
	$(CXX) $(CFLAGS) $^ -o $@

clean :
	-rm -rf *.o
	-rm -rf $(PROG)
