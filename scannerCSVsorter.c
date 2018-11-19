/*****
*
*	Define structures and function prototypes for your sorter
*
*
*
******/

//Suggestion: define a struct that mirrors a record (row) of the data set


//Suggestion: prototype a mergesort function


#include <stdio.h>
#include <stdbool.h>
extern bool headerFloats[28];

typedef struct {
	char *data[28];
	char *original[28];
} movies;

void mergesort(movies*, int, int);

int sortFile(char*,char*,char*);
int checkDirectory(char*);
int checkCSV(char*);
