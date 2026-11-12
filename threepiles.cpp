#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
    int arr[3];
    for (int i = 0; i < 3; i++){
      scanf("%d",&arr[i]);  
    }
    sort(arr,arr+3);
    bool ok=1;
    for (int i = 1; i < 3; i++)
    {
      if(arr[i]-arr[i-1]!=1) ok=0;
    }
    if(ok) printf("Yes\n");
    else printf("No\n");
    
    
  }
   
  return 0;  
}