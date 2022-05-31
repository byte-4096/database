#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define MAX 5000

char word = '!';
char str[MAX];
int counter = 0;
int done = 1;
int xss = 1;
FILE *fs1;
char data[999];
char ch[MAX];

