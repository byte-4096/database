#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



#define MAX 5000

char word = '!';
char str[MAX];
char data[999];
char ch[MAX];

int counter = 0;
int done = 1;
int xss = 1;




//creates a file with a specific typeset
char createfs(const char *fname, const char *type, FILE *fs1){
  //TODO: code 
  fs1 = fopen(fname, type);
  return NULL;
}
//puts data into a file
char putfs(FILE fs, char data[]){
  //TODO: code
  
  
} 
//gets data from a file
char getfs(FILE fs, char keywords, char position){
  //TODO: code
   fscanf(fs, "%s", buff);
}

//encodes a specific file to binary
char binfs(char fname){
  //TODO: code  

}
