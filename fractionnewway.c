#include <stdio.h>

int main(){
  int t,n,m;
  scanf("%d%d%d",&t,&n,&m);
  char p[105],q[105];
  while (t--){
    scanf("%d%d",&n,&m);
    scanf("%s %s",p,q);
    int count[26]={0};
    for (int i = 0; i <n; i++){
        count[p[i]-'a']++;
    }
    for (int i = 0; i <m; i++){
        count[q[i]-'a']--;
    }
    int ok=1;
    for (int i = 0; i<26; i++){
       ok&=count[i]==(i==8||i==23||i==18);
       
    }
    
    puts(ok?"Yes":"No");
  }
  
  return 0;  
}