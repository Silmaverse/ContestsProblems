#include <bits/stdc++.h>
#include <algorithm>
char str[103]; 

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
    int n;
    scanf("%d",&n);
    scanf("%s",str);
    int count=0;
    if(str[0]!='R') count++;
    for (int i = 1; i <n; i++){
        if(str[i-1]==str[i]) count++;
    }
    printf("%d\n",count);

  }
  

  return 0;  
}

