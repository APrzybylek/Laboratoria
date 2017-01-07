#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int m,n,**tab,k=0,i=0, x=0, y=0, min,max,pozmin,pozmax, maxx,maxy, minx,miny;
  min = 1000000;
  max = -1000000;
  int zarodek;
   time_t tt;
   zarodek = time(&tt);
  srand(zarodek);
  scanf("%d", &n);
  scanf("%d", &m);
  tab = (int**)malloc(n*sizeof(*tab));
  while(i<n){
    tab[i]=(int*)malloc(m*sizeof(**tab));
  i++;
}
n--;
m--;
while(x<=n){
  while(y<=m){
      tab[x][y] = rand()%1000000-1000;
      y++;
    }
  y=0;
  x++;
}
x=0;y=0;
while(x<=n){
while(y<=m){
printf("%6d|", tab[x][y]);
y++;
}
printf("\n");
y=0;
x++;
}
x=0; y=0;
while(x<=n){
  while(y<=m){
    if(tab[x][y] < min){
      min = tab[x][y];
      pozmin = tab[x][y];
      minx= x;
      miny= y;
    }
    if(tab[x][y] > max){
      max = tab[x][y];
      pozmax = tab[x][y];
      maxx= x;
      maxy= y;
    }
    y++;
  }
  y=0;
  x++;
}
n++;
m++;
printf("max: %d | %p | %dx%d\n",max, &pozmax, maxx, maxy );
printf("min: %d | %p | %dx%d\n",min, &pozmin, minx, miny );
  for(i=0; i<m; i++){
  free(tab[i]);
}
free(tab);
}
