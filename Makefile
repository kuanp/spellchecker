CC=g++

run_spellcheck: run_spellcheck.o fakechecker.o mychecker.o
	$(CC) -std=c++11 -o run_spellcheck run_spellcheck.o fakechecker.o mychecker.o

clean:
	rm *.o
	rm run_spellcheck
