#include <stdio.h>
#include <string.h>

int checkLength(char str[]){
  int count=0;
  int l=strlen(str);
  for (int i = 0; i <l; i++){
     count++;
  }

  return count;

}

int main(){
  int n;
  scanf("%d%d",&n);
  char str[101];
  for (int i = 0; i <n; i++){
    scanf("%s",str);
    int count=checkLength(str);    
  if(count>10){
    printf("%c%d%c\n",str[0],count-2,str[count-1]);
    
  }else{

      printf("%s\n",str);
  }

  }
  return 0;  
}