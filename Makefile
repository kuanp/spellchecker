CC=g++

run_spellcheck: run_spellcheck.o fakechecker.o mychecker.o
	$(CC) -o run_spellcheck run_spellcheck.o fakechecker.o mychecker.o

clean:
	rm *.o
	rm run_spellcheck
