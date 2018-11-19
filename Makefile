CC = gcc
CFLAGS = -I.

all: mergesort scannerCSVsorter

mergesort: mergesort.c
	$(CC) $(CFLAGS) -c mergesort.c -o mergesort.o
scannerCSVsorter: scannerCSVsorter.c
	$(CC) $(CFLAGS) scannerCSVsorter.c -o scannerCSVsorter mergesort.o

clean:
	rm mergesort.o && rm scannerCSVsorter
	