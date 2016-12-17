#include <stdio.h>

int main(){
  int suma = 0, liczba, kon = 0;
  printf("Kontynuować? 0 = nie, 1 = tak\n");
  scanf("%d", &kon);
  while(kon != 0 && kon == 1){
    printf("Podaj liczbe: ");
    scanf("%d", &liczba);
    suma += (liczba*liczba);
    printf("Kontynuować? 0 = nie, 1 = tak\n");
    scanf("%d", &kon);
  }
  if(kon != 0){
    return 1;
  }else{
  printf("Suma wynosi: %d\n", suma);
}
  return 0;
}
