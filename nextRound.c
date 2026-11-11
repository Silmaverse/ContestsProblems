#include <stdio.h>

int main(){
  int n,k;
  scanf("%d%d",&n,&k);
  int arr[n+1];
  for (int i =1;i<=n; i++){
    scanf("%d",&arr[i]);
  }
  int count=0;
  int score=arr[k];
  for (int i =1;i<=n; i++){
    if(arr[i]>=score && arr[i]>0) count++;
  }
  
  printf("%d\n",count);
  return 0;  
}