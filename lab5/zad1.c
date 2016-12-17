#include <stdio.h>
#include <stdlib.h>

int main(){
int n,i=0,k=0,**tab,wynik=0;
scanf("%d",&n);
n++;
tab = (int**)malloc(n*sizeof(*tab));
while(i<n){
  while(k<(i+1)){
  tab[i]=(int*)malloc(k*sizeof(**tab));
  k++;
}
i++;
}
i=1;
while(i<n){
k=0;
while(k<n){
  tab[i][k]=(k+1);
  k++;
}
i++;
}
i=1;
while (i<n){
printf("%d ->",i);
k=0;
while(k<i){
  printf(" %d ", tab[i][k] );
  wynik+=tab[i][k];
  k++;
}
i++;
printf("\n");
}
printf("wynik: %d\n", wynik);
for(i=0; i<n; i++){
  free(tab[i]);
}
free(tab);
  return 0;
}
