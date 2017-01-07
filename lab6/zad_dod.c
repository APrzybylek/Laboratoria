#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int x=0,y=0,z=0,q=0,maxx,maxy,max,minx,miny,min, tabx, taby;
printf("podaj ilosc kolumn: ");
scanf("%d",&tabx);
printf("podaj ilosc wierszy: ");
scanf("%d",&taby);
int tab[tabx][taby];
int zarodek;
min = 10000;
max = -1000;
 time_t tt;
 zarodek = time(&tt);
srand(zarodek);
  while(x<=tabx-1){
    while(y<=taby-1){
        tab[x][y] = rand()%10000-1000;
        y++;
      }
    y=0;
    x++;
  }
x=0;y=0;
while(x<=tabx-1){
  while(y<= taby-1){
  printf("%5d|", tab[x][y]);
  y++;
  }
  printf("\n");
  y=0;
  x++;
}
x=0; y=0;
while(x<=tabx-1){
  while(y<=taby-1){
    if(tab[x][y] < min){
      min = tab[x][y];
      minx= x;
      miny= y;
    }
    if(tab[x][y] > max){
      max = tab[x][y];
      maxx= x;
      maxy= y;
    }
    y++;
  }
  y=0;
  x++;
}
printf("najnizsza: %d o wspolzednych: %d %d\n", min, minx,miny);
printf("Najwieksza: %d o wspolzednych %d %d\n", max,maxx,maxy);
return 0;
}
