CC=gcc
CFLAGS=-I

spellcheck: spellcheck.o
	$(CC) -o spellcheck spellcheck.o $(CFLASGS)
	#$(CC) -o spellcheck spellcheck.o spellchecker.o $(CFLASGS)

