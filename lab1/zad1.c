#include <stdio.h>

int main(){
  int a, b, c;
  int max, mid, min;
int i = 0;
  scanf("%d",&a );
  scanf("%d",&b );
  scanf("%d",&c );
  double resulta = (a*b) - ((double)b/(double)c);
  int resultb = (a*b) - (b%c);
  int resultc = (a*b) - (c*a) - (b*c);
  printf("-----------------\na = %d\nb = %d\nc = %d\n", a , b , c );
  printf("-----------------\na) %.2f\nb) %d\nc) %d\n", resulta, resultb, resultc);
  if(a > c && a > b){
    max = a;
    if(b > c){
      mid = b;
      min = c;
    }else{
      mid = c;
      min = b;
    }
  }else if(b > a && b > c){
    max = b;
    if(a > c){
      mid = a;
      min = c;
    }else{
      mid = c;
      min = a;
    }
  }else{
    max = c;
    if(b > a){
      mid = b;
      min = a;
    }else{
      mid = a;
      min = b;
    }
  }
  printf("d) %d, %d, %d\n", min, mid, max );
return 0;
}
