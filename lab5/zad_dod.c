#include <stdio.h>
#include <stdlib.h>

int main(){
  /*int a=10, *temp, sum=0;
  temp=&a;
  *temp=20;
  temp=&sum;
  *temp=a;
  printf("a = %d *temp = %d sum = %d\n",a, *temp, sum);
  */
  int a,i=0, l;
  scanf("%d", &l);
  int *tab = (int*)malloc(l*sizeof(tab));
  //int *tab = (int**)malloc (n * sizeod ( *tab)); dwuwyniarowa
  while(i < l+1){
    tab[i]=i;
    i++;
  }
  printf("test:\n");
i = 0;
  while(i < l+1){
    printf("%d\n", tab[i]);
    i++;
  }
  free(tab);
  return 0;
}
