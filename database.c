#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



/*

This program is a cli for your own database! 
no file encoding supported yet

*/

//global variables
#define MAX 500

char word = '!';
char str[MAX];
int counter = 0;
int done = 1;
int xss = 1;
FILE *fs1;
char data[999];
char ch[MAX];


int main(){
  char datas[500];
  fs1 = fopen("database.dat", "r");
  printf("PLEASE WAIT FOR DATA TO ARRIVE\n");
  sleep(2);
  printf("DATA:\n");
  fgets(data, MAX, fs1);
  fgets(ch,MAX,fs1);
  printf("%s ", data);
  printf("%s", ch);
  sleep(3);
  printf("\n\n\n\n\n");
  
  
  fclose(fs1);
  
  fs1 = fopen("database.dat", "w");
  fprintf(fs1,data);
  fprintf(fs1,ch);

  printf("DATABASE\n");

  while(1){
    printf("enter what to put into database, type ! to be finished:");
    fgets(str,MAX,stdin);
    str[counter];
    if(str[counter] == word){
      printf("ending...");
      break;
    }
    fprintf(fs1,"%s",":");
    fprintf(fs1, "%s", str);
    printf("\nadding to output file\n");
  }
  printf("writing data to file");
  for(int i = 10; i > 10; i++){
      printf("adding... percentage:");
      printf("#");
  }
  
  fclose(fs1);
}
