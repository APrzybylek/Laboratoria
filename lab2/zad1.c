#include <stdio.h>

int main(){
  int num[7];
  int temp, temp2, i, sum, c = 0;
for (i= 0; i<=6; i++) {
  scanf("%d", &num[i]);
}
printf("-------------------------------------------------------------------\n");
i = 1;
temp = num[0];
temp2 = num[0];
sum = num[0];
while (i<7){
//A
 if(temp>num[i]){
   temp = num[i];
 }
//B
 if(temp2<num[i]){
   temp2 = num[i];
 }
//C
 sum += num[i];
//D
  if(num[i] > 100){
    c++;
  }
  i++;
}
printf("Najmniejsza: %d\n", temp);
printf("Największa: %d\n", temp2);
printf("Srednia arytmetyczna: %f\n", ((double)sum / 7));
printf("Liczb większych od 100 jest: %d\n", c);
  return 0;
}
