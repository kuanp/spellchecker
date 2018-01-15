# Determines compiler based on OS
UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Darwin)
    CC := clang++ -arch x86_64
else
    CC := g++
endif

# sets flags for compileation
CFLAGS += -std=c++11 -O2

# sets default compilation (used by compiler to make .o files)
CXX = $(CC)
CXXFLAGS = $(CFLAGS)

run_spellcheck: run_spellcheck.o fakechecker.o mychecker.o
	$(CC) $(CFLAGS) -o run_spellcheck run_spellcheck.o fakechecker.o mychecker.o

clean:
	echo '$(CC) $(CFLAGS)'
	rm *.o
	rm run_spellcheck
