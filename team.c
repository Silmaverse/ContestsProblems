#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  int contest[3];
  int count=0;
  while (n--){
   int sum=0;
   for (int i = 0; i <3; i++){
      scanf("%d",&contest[i]);
      sum+=contest[i];
   }
   if(sum>=2) count++;
  }
  printf("%d\n",count);
  return 0;  
}