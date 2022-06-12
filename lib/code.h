#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

//global constant values

#define max 5000

//void?
FILE *fs1;
FILE *fs2;


//strings, so many of them...
char word = '!';
char *shift[];
char *str[max];
char *data[999];
char *ch[max];
char *type[max]; 
char *name;
char *fname[max];
//encoding purposes
char *list1[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y','z'};

//decimals
float time;
float random;
float octave;
float num;

//integers
int counter = 0;
int done = 0;
int xss = 1;
time_t t;
//encodes using caeser cipher 
char encode(char *data){
  srand((unsigned) &t);
  int i;
  while(done == 0){
    i++;
    if(data[i] == list1[0]){
      data[i] = 'z';
    }
    else if(data[i] == list1[1]){
      data[i] = 'y';
    }
    else if(data[i] == list1[2]){
      data[i] = 'x';
    }
    else if(data[i] == list1[3]){
      data[i] = 'w';
    }
    else if(data[i] == list1[4]){
      data[i] = 'v';
    }
    else if(data[i] == list1[5]){
      data[i] = 'u';
    }
    else if(data[i] == list1[6]){
      data[i] = 't';
    }
    else if(data[i] == list1[7]){
      data[i] = 's';
    }
    else if(data[i] == list1[8]){
      data[i] = 'r';
    }
    else if(data[i] == list1[9]){
      data[i] = 'q';
    }
    else if(data[i] == list1[10]){
      data[i] = 'p';
    }
    else if(data[i] == list1[11]){
      data[i] = 'o';
    }
    else if(data[i] == list1[12]){
      data[i] = 'n';
    }
    else if(data[i] == list1[13]){
      data[i] = 'm';
    }
    else if(data[i] == list1[14]){
      data[i] = 'l';
    }
    else if(data[i] == list1[15]){
      data[i] = 'k';
    }
    else if(data[i] == list1[16]){
      data[i] = 'j';
    }
    else if(data[i] == list1[17]){
      data[i] = 'i';
    }
    else if(data[i] == list1[18]){
      data[i] = 'h';
    }
    else if(data[i] == list1[19]){
      data[i] = 'g';
    }
    else if(data[i] == list1[20]){
      data[i] = 'f';
    }
    else if(data[i] == list1[21]){
      data[i] = 'e';
    }
    else if(data[i] == list1[22]){
      data[i] = 'd';
    }
    else if(data[i] == list1[23]){
      data[i] = 'c';
    }
    else if(data[i] == list1[24]){
      data[i] = 'b';
    }
    else if(data[i] == list1[25]){
      data[i] = 'a';
    }
    if(data[i] == "\0"){
      done = 1;
    }
    return data;
  }
} 

//decodes ceaser cipher, 
char cs1(char data){

}
