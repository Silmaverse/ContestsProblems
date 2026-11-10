#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  scanf("%d",&t);
  while (t--){
    int n,m;
    scanf("%d%d",&n,&m);
    char p[105],q[105];
    scanf("%s %s",p,q);
    strcat(q,"six");
    sort(p,p+n);
    sort(q,q+m+3);
    if(!strcmp(p,q))printf("yes\n");
    else printf("NO\n");
     
  }
  

  return 0;  
}