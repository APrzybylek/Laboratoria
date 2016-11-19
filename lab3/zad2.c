#include <stdio.h>

int main(){
  int a,b, suma = 0;
  scanf("%d", &a);
  scanf("%d", &b);
  if(a<b){
    while(a != b){
      suma += a;
      a++;
    }
    suma += b;
  }
  printf("Suma wynosi: %d\n", suma);
  return 0;
}
