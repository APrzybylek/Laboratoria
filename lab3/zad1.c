#include <stdio.h>

int main(){
  int suma = 0, liczba;
  char kon;
  while(kon != 'y'){
    printf("Podaj liczbe: ");
    scanf("%d", &liczba);
    suma += liczba;
    printf("Czy chcesz zakonczyc? n = nie, y = tak\n");
    scanf("%s", &kon);
  }
  printf("Suma wynosi: %d\n", suma);
  return 0;
}
