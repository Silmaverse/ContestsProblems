#include <stdio.h>
#include <stdlib.h>

int main(){
  int arr[6][6];
  int rowindex=0,columnindex=0;
  for (int i = 1;i <=5; i++){
    for (int j =1; j<=5; j++){
       scanf("%d",&arr[i][j]); 
       if(arr[i][j]==1){
          rowindex=i;
          columnindex=j;
       } 
    }
  }
  int minmoves=abs(rowindex-3)+abs(columnindex-3);
  printf("%d",minmoves);
  return 0;  
}