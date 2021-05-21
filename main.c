#include <stdio.h>

void StringConcat(char s1[], char s2[]){
  char newStr[10];

  int i = 0; //s1문자열 newStr에 집어넣어주는 친구
  int j = 0; //s2문자열 길이 세주는 친구

  while(s1[i] != 0){
    newStr[i] = s1[i];
    i++;
  }

  while(s2[j] != 0){
    j++;
  }

  for(int z = 0; z < j; z++){
    newStr[z+i] = s2[z];
  }
  newStr[i+j] = '\0';

  printf("%s", newStr);
}

int main(void) {
  
  char str2[] = "Hi";
  StringConcat(str2, "Hello");

  return 0;
}
