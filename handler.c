#include "lib/code.h"

int main(){
  printf("Hi");
  char *dat = "hello";
  encode(dat);
  printf(dat);
  return 0;
}