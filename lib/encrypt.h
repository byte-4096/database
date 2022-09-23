char letters[25] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

//encodes file

char encode( char *output[999]){
  FILE *f3;
  char *input[190];
  printf("enter your files location");
  scanf("%s", &input);                         
  if(!(f3 = fopen(input,"r+"))){
    printf("file wasn't found");
  }
  else{

  }
}