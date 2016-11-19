#include <stdio.h>

int main() {
  int counter;
  scanf("%d\n", &counter);
  int tab[counter];
  for(int i=0;i<counter; i++){
    printf("Podaj %d liczbe:\n",(i+1));
    scanf("%d\n", &tab[i]);
  }
  for(int i = 0; i<counter; i++){
    printf("%d\n", tab[i]);
  }
  return 0;
}
