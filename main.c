#include <stdlib.h>
#include <stdio.h>

int main (){
  int input;
  char *string;
  int size = 1;

  printf("Write something:");

  do{
    input = getchar();
    string = (char*)realloc(string, size * sizeof(char));
    *(string + size - 1) = input;     
    size++;
  }while (input != '\n');

  string = (char*)realloc(string, size + 1* sizeof(char));
  *(string + size) = '\0';

  printf("%s\n", string);

  return 0;
}
