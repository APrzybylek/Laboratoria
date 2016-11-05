#include <stdio.h>
 int main() {
int liczba;
    scanf("%d", &liczba);
  if(liczba % 2 == 0 && liczba % 3 == 0 && liczba % 5 == 0){
    printf("%d dzieli się przez 2, 3 i 5\n", liczba);
  }else if(liczba % 2 == 0 && liczba % 3 == 0){
    printf("%d dzieli się przez 2 i 3\n", liczba);
  }else if(liczba % 2 == 0 && liczba % 5 == 0){
    printf("%d dzieli się przez 2 i 5\n", liczba);
  }else if(liczba % 3 == 0 && liczba % 5 == 0){
    printf("%d dzieli się przez 3 i 5\n", liczba);
  }else{
    if(liczba % 2 == 0){
      printf("%d dzieli się przez 2\n", liczba);
    }else if(liczba % 3 == 0){
      printf("%d dzieli się przez 3\n", liczba);
    }else if(liczba % 5 == 0){
      printf("%d dzieli się przez 5\n", liczba);
    }else{
      printf("%d nie dzieli się przez 2, 3 i 5\n", liczba);
    }
  }
  return 0;
}
