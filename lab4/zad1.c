#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rysuj();
int graj(int ktory);
void gracz();
void komputer();
void sprawdz(int x,int y,int p);
int czymozna(int x, int y);

char znaki[3][3];
int win=0;

int main(){
  int y,x;
  while(x<=3){
y=0;
    while(y<=3){
      znaki[x][y]='-';
      y++;
    }
    x++;
  }
  int zarodek;
  time_t tt;
  zarodek = time(&tt);
  srand(zarodek);
  int runda=1;
  rysuj(znaki);
  while(runda<=9 && win==0){
    if(runda%2==1){
      gracz();
    }else{
      komputer();
    }
    rysuj();
    runda++;
  }
  if(win==2){
  printf("Wygrywa komputer\n");
}else if(win==1){
  printf("Wygrywa gracz\n");
}else{
  printf("Remis\n");
}
  return 0;
}
void rysuj(){
int x=1,y;
while(x!=4){
  y=1;
  while (y!=4){
    if(znaki[x][y] == 'o'){
      printf("o");
    }else if(znaki[x][y] == 'x'){
      printf("x");
    }else{
      printf("-");
    }
    y++;
  }
  printf("\n");
  x++;
}
}
void gracz(){
    int x,y;
    scanf("%d %d",&x,&y);
    if(czymozna(x,y)==1){
    znaki[x][y]='x';
    sprawdz(x,y,1);
  }else{
    gracz();
  }
}
void komputer(){
  int x,y;
  x=rand()%3+1;
  if(czymozna(x,y)==1){
  znaki[x][y]='o';
  sprawdz(x,y,2);
}else{
  komputer();
}
}
void sprawdz(int x,int y,int p){
  int sum=0;
  char z;
  if(p==1){
  z='x';
  }else{
  z='o';
  }
if(znaki[x][y]==z){
  sum++;
if(znaki[x-1][y]==z){
  sum++;
  if(znaki[x-2][y]==z){
    win=p;
  }}
  if(znaki[x+1][y]==z){
    sum++;
    if(znaki[x+2][y]==z){
      win=p;
    }}
    if(znaki[x-1][y]==z){
      sum++;
      if(znaki[x+1][y]==z){
        win=p;
      }}
      if(znaki[x][y+1]==z){
        sum++;
        if(znaki[x][y+2]==z){
          win=p;
        }}
        if(znaki[x][y-1]==z){
          sum++;
          if(znaki[x][y-2]==z){
            win=p;
          }}
          if(znaki[x-1][y-1]==z){
            sum++;
            if(znaki[x-2][y-2]==z){
              win=p;
            }
}
if(znaki[x+1][y+1]==z){
  sum++;
  if(znaki[x+2][y+2]==z){
    win=p;
  }
}
if(znaki[x-1][y-1]==z){
  sum++;
  if(znaki[x+1][y+1]==z){
    win=p;
  }}}}

int czymozna(int x, int y){
  if(x>3 || y>3 || x<1 || y<1){
    printf("za duzo\n");
    return 0;
  }
  if(znaki[x][y]=='-'){
    printf("wolne\n");
    return 1;
  }else{
    printf("nie bo nie\n");
    return 0;
  }
}
