#include <stdio.h>

int main(){
  int a, silnia=1, i=1;
  scanf("%d", &a);
  while(i<=a){
    silnia *= i;
    i++;
  }
  printf("Silnia z %d = %d\n", a, silnia);
  return 0;
}
