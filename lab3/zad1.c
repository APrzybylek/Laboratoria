#include <stdio.h>

int main(){
  int a,b;
  scanf("%d", &a);
  scanf("%d", &b);
  if(a<b){
    printf("%d\n", a);
    a++;
    while(a != b){
      printf("%d\n", a);
      a++;
    }
    printf("%d\n", a);
  }
  return 0;
}
