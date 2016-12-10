#include <stdio.h>

int silnia(int ile);

int main() {
  int ile;
  scanf("%d",&ile);
  int wynik=silnia(++ile);
  printf("%d\n", wynik);
  return 0;
}

int silnia(int ile){
int wynik=1;
  if(ile == 1){
    return 1;
  }else{
    wynik=ile*silnia(--ile);
    return wynik;
  }
}
