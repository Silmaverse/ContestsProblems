#include <stdio.h>
#include <string.h>

int main(){
 int n;
 scanf("%d",&n);
 int x=0;
 while (n--){
   char str[4];
   scanf("%s",str);
   if(strcmp(str,"X++")==0 || strcmp(str,"++X")==0) x++;
   else if(strcmp(str,"X--")==0 || strcmp(str,"--X")==0){
     x--;
   }
}
printf("%d",x);
 
 return 0;  
}