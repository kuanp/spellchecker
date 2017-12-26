CC=g++

spellcheck: spellcheck.o spellchecker.o
	$(CC) -o spellcheck spellcheck.o spellchecker.o $(CFLASGS)

clean:
	rm *.o
	rm spellcheck
