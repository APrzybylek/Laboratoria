#include <stdio.h>
#include <stdlib.h>

int main(){
int a,b,c,x,*temp;
scanf("%d",&x);
temp=&c;
*temp=x;
temp=&b;
*temp=c;
temp=&a;
*temp=b;
printf("a: %d b: %d c: %d x: %d \n",a,b,c,x);
temp=&b;
*temp=10;
temp=&c;
*temp=x;
temp=&a;
*temp=c;
printf("a: %d b: %d c: %d x: %d \n",a,b,c,x);
temp=&c;
*temp=x;
temp=&a;
*temp=10;
temp=&b;
*temp=a;
printf("a: %d b: %d c: %d x: %d \n",a,b,c,x);
temp=&c;
*temp=x;
temp=&b;
*temp=c;
temp=&a;
*temp=b;
printf("a: %d b: %d c: %d x: %d \n",a,b,c,x);
*temp+=x;
printf("a: %d b: %d c: %d x: %d \n",a,b,c,x);
  return 0;
}
